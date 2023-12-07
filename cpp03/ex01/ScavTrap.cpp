

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name)
    : ClapTrap(name), m_name(name), m_hitPoints(100), m_energyPoints(50), m_attackDamage(20) {
        std::cout << "ScavTrap " << m_name << " is created!" << std::endl;
    }

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << m_name << " is destroyed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << "Copy constructor called" << std::endl;
    m_attackDamage = other.m_attackDamage;
    m_energyPoints = other.m_energyPoints;
    m_hitPoints = other.m_hitPoints;
    m_name = other.m_name;

}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this == &other)
    {
        return *this;
    }
    m_name = other.m_name;
    m_hitPoints = other.m_hitPoints;
    m_energyPoints = other.m_energyPoints;
    m_attackDamage = other.m_attackDamage;
    return *this;
}

void ScavTrap::attack(const std::string& target) {
    std::cout << "ScavTrap " << m_name << " attacks " << target << ", causing " << m_attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
    
    if (m_hitPoints == 0  || m_energyPoints == 0) {
        return;
    }
    
    if (amount > m_energyPoints) {
        std::cout << "ScavTrap " << m_name << " takes " << m_energyPoints << " points of damage!" << std::endl;
        m_energyPoints = 0;
        return;
    }
    if(amount > m_hitPoints ) {
        std::cout << "ScavTrap " << m_name << " takes " << m_hitPoints << " points of damage!" << std::endl;
        m_hitPoints = 0;
        return;
    }
    m_hitPoints -= amount;
    m_energyPoints -= amount;
    std::cout << "ScavTrap " << m_name << " takes " << amount << " points of damage!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
    m_hitPoints += amount;
    std::cout << "ScavTrap " << m_name << " is repaired for " << amount << " points!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << m_name << " is now in Gate keeper mode." << std::endl;
}

