// Span.cpp

#include "Span.hpp"

Span::Span(unsigned int N) : maxSize(N) {}

Span::~Span() {}

void Span::addNumber(int number)
{
    if (numbers.size() >= maxSize)
    {
        throw std::runtime_error("Cannot add more numbers. Span is full.");
    }
    numbers.push_back(number);
}

int Span::shortestSpan() const
{
    if (numbers.size() <= 1)
    {
        throw std::runtime_error("Cannot find span. Not enough numbers in the span.");
    }

    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());

    int minSpan = sortedNumbers[1] - sortedNumbers[0];
    for (size_t i = 2; i < sortedNumbers.size(); ++i)
    {
        int span = sortedNumbers[i] - sortedNumbers[i - 1];
        if (span < minSpan)
        {
            minSpan = span;
        }
    }

    return minSpan;
}

int Span::longestSpan() const
{
    if (numbers.size() <= 1)
    {
        throw std::runtime_error("Cannot find span. Not enough numbers in the span.");
    }

    int minNumber = *std::min_element(numbers.begin(), numbers.end());
    int maxNumber = *std::max_element(numbers.begin(), numbers.end());

    return maxNumber - minNumber;
}

void Span::addNumbers(const std::vector<int> &nums)
{
    if (numbers.size() + nums.size() > maxSize)
    {
        throw std::runtime_error("Cannot add more numbers. Span would exceed its maximum size.");
    }

    numbers.insert(numbers.end(), nums.begin(), nums.end());
}
