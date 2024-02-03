
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain* brain;
public:
    // Default constructor
    Dog();

    // Destructor

    ~Dog();
    
    // Copy constructor

    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    void makeSound() const;
    void setBrain(std::string ideas[100]); 
};

#endif
