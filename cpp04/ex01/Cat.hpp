
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal {
public:
    Cat();
    ~Cat();
    Cat(const Cat& other);

      Cat& operator=(const Cat& other);

    void makeSound() const ;
};

#endif