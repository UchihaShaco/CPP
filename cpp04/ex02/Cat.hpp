
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>
#include "Brain.hpp"
class Cat : public Animal 
{
private:
    Brain* brain;
public:
    Cat();
    ~Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);

    void makeSound() const ;
    void setBrain(std::string ideas[100]);
    std::string* getBrain();
    


};

#endif