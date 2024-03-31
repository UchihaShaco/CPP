
#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
    std::vector<int> vec(5);
    vec[0] = 1;
    vec[1] = 2;
    vec[2] = 3;
    vec[3] = 4;
    vec[4] = 5;

    try
    {
        int value = 3;
        std::vector<int>::iterator it = easyfind(vec, value);
        std::cout << "Value " << value << " found at index " << std::distance(vec.begin(), it) << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try
    {
        int value = 6;
        std::vector<int>::iterator it = easyfind(vec, value);
        std::cout << "Value " << value << " found at index " << std::distance(vec.begin(), it) << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
