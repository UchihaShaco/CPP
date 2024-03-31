#pragma once

#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> > {
public:
    typedef typename std::deque<T>::iterator iterator;

    MutantStack() : std::stack<T, std::deque<T> >() {}
    ~MutantStack() {}

    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
};
