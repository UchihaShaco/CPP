#include "Animal.hpp"

Animal::Animal() : type("Generic Animal") {
    std::cout << "Default Animal constructor called for: " << type << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << "Copy Animal constructor called for: " << type << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << "Copy assignment operator called for: " << type << std::endl;
    return *this;
}

Animal::~Animal() {
    std::cout << "Destructor called for: " << type << std::endl;
}

std::string Animal::getType() const {
    return type;
}

void Animal::makeSound() const {
    std::cout << "Animal sound!" << std::endl;
}
