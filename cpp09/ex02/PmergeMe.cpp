#include "PmergeMe.hpp"

PmergeMe::PmergeMe(const std::vector<int> &numbers)
{
    size_t i = 0;
    while (i < numbers.size())
    {
        _listNumbers.push_back(numbers[i]);
        _vectorNumbers.push_back(numbers[i]);
        i++;
    }
}

PmergeMe::~PmergeMe() {}

void PmergeMe::vector_merge(num left, num middle, num right)
{
    std::vector<int> leftVector;
    std::vector<int> rightVector;

    num i = left;
    while (i <= middle)
    {
        leftVector.push_back(_vectorNumbers[i]);
        i++;
    }

    num j = middle + 1;
    while (j <= right)
    {
        rightVector.push_back(_vectorNumbers[j]);
        j++;
    }

    i = 0;
    j = 0;
    num k = left;
    while (i < leftVector.size() && j < rightVector.size())
    {
        if (leftVector[i] <= rightVector[j])
        {
            _vectorNumbers[k] = leftVector[i];
            i++;
        }
        else
        {
            _vectorNumbers[k] = rightVector[j];
            j++;
        }
        k++;
    }

    while (i < leftVector.size())
    {
        _vectorNumbers[k] = leftVector[i];
        i++;
        k++;
    }

    while (j < rightVector.size())
    {
        _vectorNumbers[k] = rightVector[j];
        j++;
        k++;
    }
}

void PmergeMe::vector_mergeSort(num left, num right)
{
    if (left < right)
    {
        num middle = left + (right - left) / 2;
        vector_mergeSort(left, middle);
        vector_mergeSort(middle + 1, right);
        vector_merge(left, middle, right);
    }
}

void PmergeMe::list_merge(num left, num middle, num right)
{
    std::list<int> leftList;
    std::list<int> rightList;

    std::list<int>::iterator it = _listNumbers.begin();
    std::advance(it, left);
    num i = left;
    while (i <= middle)
    {
        leftList.push_back(*it);
        it++;
        i++;
    }

    it = _listNumbers.begin();
    std::advance(it, middle + 1);
    num j = middle + 1;
    while (j <= right)
    {
        rightList.push_back(*it);
        it++;
        j++;
    }

    it = _listNumbers.begin();
    std::advance(it, left);
    std::list<int>::iterator itLeft = leftList.begin();
    std::list<int>::iterator itRight = rightList.begin();

    while (itLeft != leftList.end() && itRight != rightList.end())
    {
        if (*itLeft <= *itRight)
        {
            *it = *itLeft;
            itLeft++;
        }
        else
        {
            *it = *itRight;
            itRight++;
        }
        it++;
    }

    while (itLeft != leftList.end())
    {
        *it = *itLeft;
        itLeft++;
        it++;
    }

    while (itRight != rightList.end())
    {
        *it = *itRight;
        itRight++;
        it++;
    }
}

void PmergeMe::list_mSort(num left, num right)
{
    if (left < right)
    {
        num middle = left + (right - left) / 2;
        list_mSort(left, middle);
        list_mSort(middle + 1, right);
        list_merge(left, middle, right);
    }
}

long PmergeMe::sortVector()
{
    long start = getTimestamp();

    if (_vectorNumbers.size() <= THRESHOLD)
    {
        // Insertion sort
        num i = 1;
        while (i < _vectorNumbers.size())
        {
            num j = i;
            while (j > 0 && _vectorNumbers[j - 1] > _vectorNumbers[j])
            {
                std::swap(_vectorNumbers[j - 1], _vectorNumbers[j]);
                j--;
            }
            i++;
        }
    }
    else
    {
        // Merge sort
        num left = 0;
        num right = _vectorNumbers.size() - 1;
        vector_mergeSort(left, right);
    }

    long end = getTimestamp();
    return end - start;
}

long PmergeMe::sortList()
{
    long start = getTimestamp();

    if (_listNumbers.size() <= THRESHOLD)
    {
        // Insertion sort
        std::list<int>::iterator it = _listNumbers.begin();
        while (it != _listNumbers.end())
        {
            std::list<int>::iterator it2 = it;
            if (it2 != _listNumbers.begin())
            {
                it2--;
                while (it2 != _listNumbers.begin() && *it2 > *it)
                {
                    std::swap(*it2, *it);
                    it2--;
                }
                if (*it2 > *it)
                {
                    std::swap(*it2, *it);
                }
            }
            it++;
        }
    }
    else
    {
        // Merge sort
        num left = 0;
        num right = _listNumbers.size() - 1;
        list_mSort(left, right);
    }

    long end = getTimestamp();
    return end - start;
}

void PmergeMe::printVector()
{
    std::vector<int>::const_iterator it = _vectorNumbers.begin();
    while (it != _vectorNumbers.end())
    {
        std::cout << *it << " ";
        it++;
    }
    std::cout << std::endl;
}

void PmergeMe::printList()
{
    std::list<int>::const_iterator it = _listNumbers.begin();
    while (it != _listNumbers.end())
    {
        std::cout << *it << " ";
        it++;
    }
    std::cout << std::endl;
}

long PmergeMe::getTimestamp() const
{
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return tv.tv_sec * (int)1e6 + tv.tv_usec;
}
