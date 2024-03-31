#pragma once
#include <cstddef> 

template<typename T>
void iter(T *array, size_t length, void (*func)(T &))
{
    size_t i = 0;
    while (i < length)
    {
        func(array[i]);
        ++i;
    }
}
