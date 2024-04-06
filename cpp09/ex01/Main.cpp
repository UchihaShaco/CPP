#include <iostream>
#include <cctype>
#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc > 2)
    {
        RPN rpn;
        std::string input = "";
        int i = 1;
        while (argv[i] != NULL)
        {
            input += argv[i];
            input += " ";
            i++;
        }
        for (size_t j = 0; j < input.size(); j++)
        {
            char ch = input[j];
            if (std::isdigit(ch))
            {
                rpn.addNumber(ch - '0');
            }
            else if (ch == '+')
            {
                rpn.calculate(ADD);
            }
            else if (ch == '-')
            {
                rpn.calculate(SUBTRACT);
            }
            else if (ch == '*')
            {
                rpn.calculate(MULTIPLY);
            }
            else if (ch == '/')
            {
                rpn.calculate(DIVIDE);
            }
            else if (ch == ' ')
            {
                continue;
            }
            else
            {
                std::cout << "Error" << std::endl;
                return 1;
            }
        }
        rpn.printStack();
    }
    else
    {
        std::cout << "Error" << std::endl;
        return 0;
    }
    return 1;
}
