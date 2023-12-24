
#include "Cat.hpp"

// Default constructor

Cat::Cat() {
    type = "Cat";
    std::cout << "Default Cat constructor called" << std::endl;
}

// Destructor

Cat::~Cat() {
    std::cout << "Destructor called for: " << type << std::endl;
}

// Copy constructor

Cat::Cat(const Cat& other) : Animal(other) {
    type = other.type;
    std::cout << "Copy Cat constructor called for: " << type << std::endl;
}


Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << "Copy assignment operator called for: " << type << std::endl;
    return *this;
}
void Cat::makeSound() const {
    std::cout << "Meow! Meow!" << std::endl;
}

