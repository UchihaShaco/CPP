#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* doggie = new Dog();
    const Animal* kadisa = new Cat();
    // const Animal* wrong = new WrongCat();

    std::cout << doggie->getType() << " " << std::endl;
    std::cout << kadisa->getType() << " " << std::endl;
    kadisa->makeSound();  // will output the cat sound!
    doggie->makeSound();
    meta->makeSound();
    
    // Additional tests
    // std::cout << wrong->getType() << " " << std::endl;
    // wrong->makeSound();

    delete meta;
    delete doggie;
    delete kadisa;
    // delete wrong;

    return 0;
}
