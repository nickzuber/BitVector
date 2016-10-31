#ifndef INCLUDE_BIT_VECTOR
#define INCLUDE_BIT_VECTOR

#include <iostream>
#include <exception>
#include <stdexcept>
#include <memory>
#include <math.h>

template <class data_type>
class BitVector {
    
public:

		static const int BITS_PER_BYTE = 8;

    /**
     * Creates an empty BitVector.
     * @param  {void}
     * @return {BitVector} The new BitVector object.
     */
    BitVector (void) {
        this->internal_size = 1;
        this->internal_array = new data_type[this->internal_size];
    };
    
		/**
		 * Destructor for BitVector.
		 * @param  {void}
		 * @return {void)
		 */
		~BitVector (void) {
			delete [] this->internal_array;
		}
    
    /**
     * Attempts to set a particular bit within the BitVector.
     * @param  {const size_t&}    pos  The position within the vector.
     * @param  {const data_type&} data The bit to set.
     * @return {bool}                  The success of the set.
     */
    bool set (const size_t& pos, const data_type& data);
    
    /**
     * Syntactic sugar for the `get` method -- provides the value of bit at the given position.
     * @param  {const size_t&} pos The position within the vector.
     * @return {bool}              The success of the look up.
     */
    data_type operator[] (const size_t& pos) const;
    
    /**
		 * Provides the value of bit at the given position.
     * @param  {const size_t&} pos The position within the vector.
     * @return {bool}              The success of the look up.
     */
    data_type get (const size_t& pos) const;
    
		/**
		 * Takes the complement of the calling BitVector.
		 * @param  {void}
		 * @return {const BitVector&} The complement BitVector.
		 */
		BitVector& complement (const BitVector& vec) const;

		/**
		 * Takes the union of the argument BitVector.
		 * @param  {const BitVector&}
		 * @return {const BitVector&} The complement BitVector.
		 */
		BitVector& unionize (const BitVector& vec) const;

		/**
		 * Takes the union of the calling BitVector.
		 * @param  {const BitVector&}
		 * @return {const BitVector&} The complement BitVector.
		 */
		BitVector& unionize () const;

		/**
		 * Takes the union of the argument BitVector.
		 * @param  {const BitVector&}
		 * @return {const BitVector&} The complement BitVector.
		 */
		BitVector& intersection (const BitVector& vec) const;

		/**
		 * Takes the union of the calling BitVector.
		 * @param  {const BitVector&}
		 * @return {const BitVector&} The complement BitVector.
		 */
		BitVector& intersection () const;

		/**
     * Provides the amount of bits allocated for the BitVector.
     * @param  {void}
     * @return {size_t} The total amount of bits.
     */
    size_t size () const;
    
    /**
     * Changes the capacity of the BitVector.
     * @param  {const size_t&} size The new capacity.
     * @return {bool}               The success of resizing.
     */
    void resize (const size_t& size);
    
private:
    /** Capacity of the internal array. */
    size_t internal_size;
    
    /** Pointer to the internal array. */
    data_type* internal_array;
};

#endif /* INCLUDE_BIT_VECTOR */
 
