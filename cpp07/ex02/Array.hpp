#pragma once

#include <cstddef>
#include <stdexcept> 

template <typename T>
class Array
{
private:
    T *elements;
    size_t arraySize;

public:
    // Constructors and Destructor
    Array();
    explicit Array(size_t size);
    Array(const Array &other);
    ~Array();

    // Assignment Operator
    Array &operator=(const Array &other);

    // Subscript Operator // subscript operator is used to access elements in the array by index
    T &operator[](size_t index);

    // Size Function
    size_t size() const;

private:
    // Helper functions
    void resize(size_t newSize);
    void copyFrom(const Array &other);
};

#include "Array.tpp"