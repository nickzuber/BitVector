
#include "bit_vector.h"

/**
 * Inserts a single element into the BitVector at the given position.
 * @param  {const size_t&}    pos  The position within the vector.
 * @param  {const data_type&} data The data to insert.
 * @return {bool}                  The success of the insertion.
 */
template <class data_type>
bool BitVector<data_type>::set (const size_t& pos, const data_type& data) {
    return true;
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
    if (pos >= this->internal_size) {
        throw std::range_error("Attempted to access an illegal position in BitVector.");
    }
};

/**
 * Provides the total amount of elements within the BitVector.
 * @param  {void}
 * @return {size_t} The total amount of elements.
 */
template <class data_type>
size_t BitVector<data_type>::size () const {
    return this->internal_size;
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


