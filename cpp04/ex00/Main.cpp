#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// int main() {
//     const Animal* meta = new Animal();
//     const Animal* doggie = new Dog();
//     const Animal* kadisa = new Cat();
//     // const Animal* wrong = new WrongCat();

//     std::cout << doggie->getType() << " " << std::endl;
//     std::cout << kadisa->getType() << " " << std::endl;
//     kadisa->makeSound();  // will output the cat sound!
//     doggie->makeSound();
//     meta->makeSound();
    
//     // Additional tests
//     // std::cout << wrong->getType() << " " << std::endl;
//     // wrong->makeSound();

//     delete meta;
//     delete doggie;
//     delete kadisa;
//     // delete wrong;

//     return 0;
// }

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); // will output the cat sound!
    // j->makeSound();
    meta->makeSound();

    // Additional tests
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongI = new WrongCat();
    std::cout << wrongI->getType() << " " << std::endl;
    wrongI->makeSound();
    wrongMeta->makeSound();

    delete meta;
    delete j;
    delete i;
    delete wrongMeta;
    delete wrongI;

    return 0;
}
