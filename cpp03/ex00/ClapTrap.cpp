#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name)
    : m_name(name), m_hitPoints(100), m_energyPoints(100), m_attackDamage(10) {}

ClapTrap::~ClapTrap() {}

void ClapTrap::attack(const std::string& target) {
    std::cout << "ClapTrap " << m_name << " attacks " << target << ", causing " << m_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    
    if (m_hitPoints == 0  || m_energyPoints == 0) {
        return;
    }
    
    if (amount > m_energyPoints) {
        std::cout << "ClapTrap " << m_name << " takes " << m_energyPoints << " points of damage!" << std::endl;
        m_energyPoints = 0;
        return;
    }
    if(amount > m_hitPoints ) {
        std::cout << "ClapTrap " << m_name << " takes " << m_hitPoints << " points of damage!" << std::endl;
        m_hitPoints = 0;
        return;
    }
    m_hitPoints -= amount;
    m_energyPoints -= amount;
    std::cout << "ClapTrap " << m_name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    m_hitPoints += amount;
    std::cout << "ClapTrap " << m_name << " is repaired for " << amount << " points!" << std::endl;
}
