

#pragma once

#include <iostream>
#include <string>


class Animal {
protected:
    std::string type;

public:
    // Default constructor
    Animal();
    // Copy constructor
    Animal(const Animal& other);

    // Copy assignment operator
    Animal& operator=(const Animal& other);
    // Destructor
   virtual ~Animal();
    virtual void makeSound() const ;

    std::string getType() const ;

};

