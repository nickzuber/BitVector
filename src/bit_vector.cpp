
#include "bit_vector.h"

/**
 * Inserts a single element into the BitVector at the given position.
 * @param  {const size_t&} pos  The position within the vector.
 * @param  {const bool&}   data The data to insert.
 * @return {void}
 */
template <class data_type>
void BitVector<data_type>::set (const size_t& pos, const bool& data) {
	if (pos < 0 || pos >= this->internal_size * sizeof(data_type) * BITS_PER_BYTE) {
		throw std::range_error("Attempted to access an illegal position in BitVector.");
	}
	int index = floor((pos + 1) / ((sizeof(data_type) * BITS_PER_BYTE)));
	if (data) {
		this->internal_array[index] |= 1 << ((sizeof(data_type) * BITS_PER_BYTE) - pos);
	} else {
		this->internal_array[index] &= ~(1 << ((sizeof(data_type) * BITS_PER_BYTE) - pos));
	}
};

/**
 * Syntactic sugar for the `at` method -- finds the element at the given position.
 * @param  {const size_t&} pos The position within the vector.
 * @return {bool}              The success of the look up.
 */
template <class data_type>
data_type BitVector<data_type>::operator[] (const size_t& pos) const {
    return this->at(pos);
};

/**
 * Finds the element at the given position.
 * @param  {const size_t&} pos The position within the vector.
 * @return {bool}              The success of the look up.
 */
template <class data_type>
data_type BitVector<data_type>::get (const size_t& pos) const {
	if (pos < 0 || pos >= this->internal_size * sizeof(data_type) * BITS_PER_BYTE) {
		throw std::range_error("Attempted to access an illegal position in BitVector.");
	}
	int index = floor((pos + 1) / (sizeof(data_type) * BITS_PER_BYTE));
	int seqCpy = this->internal_array[index];
	return (seqCpy >> ((sizeof(data_type) * BITS_PER_BYTE) - pos)) & 1;
};

/**
 * Provides the total amount of elements within the BitVector.
 * @param  {void}
 * @return {size_t} The total amount of elements.
 */
template <class data_type>
size_t BitVector<data_type>::size () const {
    return this->internal_size * sizeof(data_type) * BITS_PER_BYTE;
};

/**
 * Changes the capacity of the BitVector.
 * @param  {const size_t&} size The new capacity.
 * @return {bool}               The success of resizing.
 */
template <class data_type>
void BitVector<data_type>::resize (const size_t& size) {
	unsigned int i;
	data_type* new_internal_array = new data_type[size];
	for (i = 0; i < this->internal_size; ++i) {
		this->internal_array[i] = new_internal_array[i];
	}
	this->internal_size = size;
	delete [] this->internal_array;
	this->internal_array = new_internal_array;
};


