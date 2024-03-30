#include "ScalarConverter.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>

void ScalarConverter::convert(const std::string &str)
{
    // Check if input is "nan"
    if (str == "nan")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return;
    }

    // Convert char
    std::cout << "char: ";
    int n;
    std::istringstream ss(str);
    if (str.length() == 1 && !isdigit(str[0]))
    {
        n = static_cast<int>(str[0]);
        char c = static_cast<char>(n);
        if (std::isprint(c))
            std::cout << "'" << c << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
    }
    else if (isdigit(str[0]))
    {
        ss >> n;
        char c = static_cast<char>(n);
        if (std::isprint(c))
            std::cout << "'" << c << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
    }
    else
    {
        std::cout << "Non displayable" << std::endl;
    }

    // Convert int
    std::cout << "int: ";
    ss.clear();
    ss.str(str);
    ss >> n;
    if (ss.fail())
    {
        std::cout << "impossible" << std::endl;
    }
    else
    {
        std::cout << n << std::endl;
    }

    // Convert float
    std::cout << "float: ";
    ss.clear();
    ss.str(str);
    float f;
    ss >> f;
    if (ss.fail() || ss.bad() || std::isnan(f))
    {
        std::cout << "impossible" << std::endl;
    }
    else
    {
        std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
    }

    // Convert double
    std::cout << "double: ";
    ss.clear();
    ss.str(str);
    double d;
    ss >> d;
    if (ss.fail() || ss.bad() || std::isnan(d))
    {
        std::cout << "impossible" << std::endl;
    }
    else
    {
        std::cout << std::fixed << std::setprecision(1) << d << std::endl;
    }
}
