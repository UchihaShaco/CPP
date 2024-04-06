#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

void RPN::addNumber(double number)
{
    _numberStack.push(number);
}

void RPN::calculate(Operation operation)
{
    if (_numberStack.size() < 2)
    {
        std::cout << "Error: Insufficient operands for calculation" << std::endl;
        std::exit(1);
    }

    double result1 = _numberStack.top();
    _numberStack.pop();

    double result2 = _numberStack.top();
    _numberStack.pop();

    if (operation == ADD)
    {
        _numberStack.push(result2 + result1);
    }
    else if (operation == SUBTRACT)
    {
        _numberStack.push(result2 - result1);
    }
    else if (operation == MULTIPLY)
    {
        _numberStack.push(result2 * result1);
    }
    else if (operation == DIVIDE)
    {
        if (result1 == 0)
        {
            std::cout << "Error: Division by zero" << std::endl;
            _numberStack.push(result2);
            _numberStack.push(result1);
            std::exit(1);
        }
        _numberStack.push(result2 / result1);
    }
}

void RPN::printStack()
{
    if (_numberStack.empty())
    {
        std::cout << "Error: Stack is empty" << std::endl;
        return;
    }
    else if (_numberStack.size() > 1)
    {
        std::cout << "Error: Too many operands in the stack" << std::endl;
        return;
    }
    std::cout << _numberStack.top() << std::endl;
}
