#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array() : elements(NULL), arraySize(0) {}

template <typename T>
Array<T>::Array(size_t size) : elements(NULL), arraySize(0)
{
    resize(size);
}

template <typename T>
Array<T>::Array(const Array &other) : elements(NULL), arraySize(0)
{
    copyFrom(other);
}

template <typename T>
Array<T>::~Array()
{
    delete[] elements;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
    if (this != &other)
    {
        delete[] elements;
        copyFrom(other);
    }
    return *this;
}

template <typename T>
T &Array<T>::operator[](size_t index)
{
    if (index >= arraySize)
    {
        throw std::out_of_range("Index out of range");
    }
    return elements[index];
}

template <typename T>
size_t Array<T>::size() const
{
    return arraySize;
}

template <typename T>
void Array<T>::resize(size_t newSize)
{
    T *newElements = new T[newSize];
    delete[] elements;
    elements = newElements;
    arraySize = newSize;
}

template <typename T>
void Array<T>::copyFrom(const Array &other)
{
    resize(other.arraySize);
    for (size_t i = 0; i < arraySize; ++i)
    {
        elements[i] = other.elements[i];
    }
}
#endif
