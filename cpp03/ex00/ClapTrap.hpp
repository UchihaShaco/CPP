
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
private:
    std::string m_name;
    unsigned int m_hitPoints;
    unsigned int m_energyPoints;
    unsigned int m_attackDamage;

public:
    ClapTrap(const std::string &name);
    ~ClapTrap();

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
/*
in bashrc to nonrmainette work i need to write 
export DYLD_LIBRARY_PATH=/Users/$(whoami)/.brew/lib
export DYLD_FRAMEWORK_PATH=/Users/$(whoami)/.brew/lib
export DYLD_INCLUDE_PATH=/Users/$(whoami)/.brew/include
export DYLD_ROOT_PATH=/Users/$(whoami)/.brew

*/