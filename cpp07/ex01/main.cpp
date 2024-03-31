#include <iostream>
#include "iter.hpp"

// Example function to be applied
template<typename T>
void Myprinter(T &elem)
{
    std::cout << elem << " ";
}

int main()
{
    int intarr[] = {1, 2, 3, 4, 5};
    char chararr[] = {'a', 'b', 'c', 'd', 'e'};

    std::cout << "Printing intarr: ";
    iter(intarr, 5, Myprinter<int>);
    std::cout << std::endl;

    std::cout << "Printing chararr: ";
    iter(chararr, 5, Myprinter<char>);
    std::cout << std::endl;

    return 0;
}
