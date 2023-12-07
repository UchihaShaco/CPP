
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

private:
    std::string m_name;
    unsigned int m_hitPoints;
    unsigned int m_energyPoints;
    unsigned int m_attackDamage;

public:
    // Destructor
    ~ScavTrap();
    // Default constructor
    ScavTrap(const std::string &name);
    // Copy constructor
    ScavTrap(const ScavTrap &other);
    ScavTrap();
    ScavTrap &operator=(const ScavTrap &other);
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void guardGate();
};

#endif
/*
*/