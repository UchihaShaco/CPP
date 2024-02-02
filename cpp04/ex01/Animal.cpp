#include <iostream>
#include <string>
#include "Animal.hpp"

// Default constructor

Animal::Animal() {
    type = "Generic Animal";
    std::cout << "Default Animal constructor called for: " << type << std::endl;
}

// Copy constructor

Animal::Animal(const Animal& other){
    type = other.type;
    std::cout << "Copy Animal constructor called for: " << type << std::endl;
}

// Copy assignment operator

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << "Copy assignment operator called for: " << type << std::endl;
    return *this; // it returns a reference to itself
}

// Destructor

Animal::~Animal() {
    std::cout << "Destructor called for: " << type << std::endl;
}

std::string Animal::getType() const {
    return type;
}

// makeSound method

void Animal::makeSound() const {
    std::cout << "Animal sound!" << std::endl;
}

// command to coppy everything from current directory to the ex02 directory is 