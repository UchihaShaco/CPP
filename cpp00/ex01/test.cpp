#include <iostream>

#include <iostream>
#include <string>
#include <iomanip>
// class Rectangle
// {
// private:
//     int width;
//     int height;

// public:
//     Rectangle() 
// 	{
//         width = 0;
//         height = 0;
//         std::cout << "Default constructor called." << std::endl;
//     }

//     Rectangle(int w, int h)
// 	{
//         width = w;
//         height = h;
//         std::cout << "Parameterized constructor called." << std::endl;
//     }

//     int calculateArea()
// 	{
//         return width * height;
//     }
// };

int main()
{
   std::cout << std::setw(10) << "123456789aaaaaa" << "|"
          << std::setw(10) << "First Name" << "|"
          << std::setw(10) << "Last Name" << "|"
          << std::setw(20) << "k" << "|" << std::endl;

    return 0;
}