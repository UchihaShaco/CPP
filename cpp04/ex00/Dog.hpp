
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal {
public:
    // Default constructor
    Dog();

    // Destructor

    ~Dog();
    
    // Copy constructor
    Dog(const Dog& other);

    Dog& operator=(const Dog& other);

    void makeSound() const; // or virtual void makeSound() const;
};

#endif