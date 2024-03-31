#pragma once

#include <vector>
#include <algorithm>
#include <stdexcept>

class Span
{
private:
    std::vector<int> numbers;
    unsigned int maxSize;

public:
    Span(unsigned int N);
    ~Span();

    void addNumber(int number);
    int shortestSpan() const;
    int longestSpan() const;
    void addNumbers(const std::vector<int> &nums);
};
