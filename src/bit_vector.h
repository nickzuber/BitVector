#ifndef INCLUDE_BIT_VECTOR
#define INCLUDE_BIT_VECTOR

#include <iostream>
#include <exception>
#include <stdexcept>
#include <memory>

template <class data_type>
class BitVector {
    
public:
    /**
     * Creates an empty BitVector.
     * @param  {void}
     * @return {BitVector} The new BitVector object.
     */
    BitVector (void) {
        this->internal_size = 1;
        this->internal_array = new data_type[this->internal_size];
        this->total_count = 0;
    };
    
    ~BitVector (void) {};
    
    /**
     * Inserts a single element into the BitVector at the given position.
     * @param  {const size_t&}    pos  The position within the vector.
     * @param  {const data_type&} data The data to insert.
     * @return {bool}                  The success of the insertion.
     */
    bool insert (const size_t& pos, const data_type& data);
    
    /**
     * Removes a single element into the BitVector.
     * @param  {const data_type&} data The data to remove.
     * @return {bool}                  The success of the removal.
     */
    bool remove (const data_type& data);
    
    /**
     * Syntactic sugar for the `at` method -- finds the element at the given position.
     * @param  {const size_t&} pos The position within the vector.
     * @return {bool}              The success of the look up.
     */
    data_type operator[] (const size_t& pos) const;
    
    /**
     * Finds the element at the given position.
     * @param  {const size_t&} pos The position within the vector.
     * @return {bool}              The success of the look up.
     */
    data_type at (const size_t& pos) const;
    
    /**
     * Provides the total amount of elements within the BitVector.
     * @param  {void}
     * @return {size_t} The total amount of elements.
     */
    size_t size () const;
    
    /**
     * Provides the total amount of allocated space within the BitVector.
     * @param  {void}
     * @return {size_t} The total amount of allocated space.
     */
    size_t capacity () const;
    
    /**
     * Changes the capacity of the BitVector.
     * @param  {const size_t&} size The new capacity.
     * @return {bool}               The success of resizing.
     */
    bool resize (const size_t& size) const;
    
private:
    /** Capacity of the internal array. */
    size_t internal_size;
    
    /** Pointer to the internal array. */
    data_type* internal_array;
    
    /** Total amount of elements in the array. */
    size_t total_count;
    
};

#endif /* INCLUDE_BIT_VECTOR */
