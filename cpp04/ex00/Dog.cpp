#include "Dog.hpp"

// Default constructor
Dog::Dog() {
    type = "Dog";
    std::cout << "Default Dog constructor called" << std::endl;
}

// Destructor
Dog::~Dog() {
    std::cout << "Destructor called for: " << type << std::endl;
}

// Copy constructor

Dog::Dog(const Dog& other) : Animal(other) {
    type = other.type;
    std::cout << "Copy Dog constructor called for: " << type << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << "Copy assignment operator called for: " << type << std::endl;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof! Woof!" << std::endl;
}

