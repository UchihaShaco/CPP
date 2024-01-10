#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() 
{
    type = "Wrong Animal";
    std::cout << "WrongAnimal constructor called for " << type << std::endl;
}


WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called for " << type << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "Some wrong generic sound" << std::endl;
}

const std::string& WrongAnimal::getType() const {
    return type;
}
