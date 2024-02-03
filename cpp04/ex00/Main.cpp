#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* puppy = new Dog();
    const Animal* kittie = new Cat();
    std::cout << puppy->getType() << " " << std::endl;
    std::cout << kittie->getType() << " " << std::endl;
	std::cout << "now cat make sound:";
    kittie->makeSound(); // will output the cat sound!
	std::cout << "\nnow dog make sound:";
    puppy->makeSound();
	std::cout << "\n";
    meta->makeSound();

    // Additional tests
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongI = new WrongCat();
    std::cout << wrongI->getType() << " " << std::endl;
	std::cout << "\nnow wrong make sound:";
    wrongI->makeSound();
    wrongMeta->makeSound();
	std::cout << "\n";

    delete meta;
    delete puppy;
    delete kittie;
    delete wrongMeta;
    delete wrongI;

    return 0;
}
