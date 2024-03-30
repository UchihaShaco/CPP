

#include "Base.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>

Base *generate()
{
    srand(time(NULL));
    int choice = rand() % 3;
    switch (choice)
    {
    case 0:
        return new A();
    case 1:
        return new B();
    case 2:
        return new C();
    default:
        return NULL;
    }
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
    {
        std::cout << "A" << std::endl;
    }
    else if (dynamic_cast<B *>(p))
    {
        std::cout << "B" << std::endl;
    }
    else if (dynamic_cast<C *>(p))
    {
        std::cout << "C" << std::endl;
    }
}

void identify(Base &p)
{
    if (typeid(p) == typeid(A)) 
    {
        std::cout << "A" << std::endl;
    }
    else if (typeid(p) == typeid(B))
    {
        std::cout << "B" << std::endl;
    }
    else if (typeid(p) == typeid(C))
    {
        std::cout << "C" << std::endl;
    }
}
