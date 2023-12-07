#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    m_name = "Clap";
    m_hitPoints = 100;
    m_energyPoints = 100;
    m_attackDamage = 10;
}

ClapTrap::ClapTrap(const std::string& name)
    : m_name(name), m_hitPoints(100), m_energyPoints(100), m_attackDamage(10) {
        std::cout << "ClapTrap " << m_name << " is created!" << std::endl;
    }

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << m_name << " is destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    std::cout << "Copy constructor called" << std::endl;
    if (this == &other)
    {
        return;
    }
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this == &other)
    {
        return *this;
    }
    std::cout << "Assignation operator called" << std::endl;
    m_name = other.m_name;
    m_hitPoints = other.m_hitPoints;
    m_energyPoints = other.m_energyPoints;
    m_attackDamage = other.m_attackDamage;
    return *this;
}

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

    if(m_hitPoints == 0)
        return;
    if(m_energyPoints == 0)
        return;
    
    m_hitPoints += amount;
    std::cout << "ClapTrap " << m_name << " is repaired for " << amount << " points!" << std::endl;
}
