#include <iostream>
#include "Array.hpp"

int main()
{

    try
    {
        // Test construction with no parameters
        Array<int> emptyArray;
        std::cout << "Size of empty array: " << emptyArray.size() << std::endl;

        // Test construction with a specified size
        Array<int> intArray(5);
        std::cout << "Size of int array: " << intArray.size() << std::endl;

        // Test accessing elements and size function
        for (size_t i = 0; i < intArray.size(); ++i)
        {
            intArray[i] = i + 1;
        }

        std::cout << "Elements of int array: ";
        for (size_t i = 0; i < intArray.size(); ++i)
        {
            std::cout << intArray[i] << " ";
        }
        std::cout << std::endl;

        // Test copy constructor and assignment operator
        Array<int> copiedArray(intArray);
        Array<int> assignedArray = intArray;

        std::cout << "Copied array size: " << copiedArray.size() << std::endl;
        std::cout << "Assigned array size: " << assignedArray.size() << std::endl;

        // Test accessing out of range index
        std::cout << "Trying to access out of range index..." << std::endl;
        std::cout << intArray[intArray.size()] << std::endl;
    }

    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
