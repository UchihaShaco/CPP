#pragma once

#include <iostream>
#include <stack>
#include <cstdlib>

enum Operation
{
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
};

class RPN
{
public:
    RPN();
    ~RPN();

    void addNumber(double number);
    void calculate(Operation operation);
    void printStack();

private:
    std::stack<double> _numberStack;
};
