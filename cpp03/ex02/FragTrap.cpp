
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() 
  {
    m_name = "scav default cons";
    m_energyPoints = 100;
    m_attackDamage = 20;

     std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{ 
    std::cout << "FragTrap Parameterized constructor called" << std::endl;
    m_hitPoints = 100;
    m_energyPoints = 100;
    m_attackDamage = 30;
}


FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) // the copy constructor 
{
    std::cout << "FragTrap copy constructor called" << std::endl;   
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
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
void FragTrap::attack(const std::string &target)
{
    std::cout << "FragTrap " << m_name << " attacks " << target << ", causing " << m_attackDamage << " points of damage!" << std::endl;
}


void FragTrap::takeDamage(unsigned int amount)
{
    if (m_hitPoints == 0 || m_energyPoints == 0)
    {
        return;
    }

    if (amount > m_energyPoints)
    {
        std::cout << "FragTrap " << m_name << " takes " << m_energyPoints << " points of damage!" << std::endl;
        m_energyPoints = 0;
        return;
    }
    if (amount > m_hitPoints)
    {
        std::cout << "FragTrap " << m_name << " takes " << m_hitPoints << " points of damage!" << std::endl;
        m_hitPoints = 0;
        return;
    }
    m_hitPoints -= amount;
    m_energyPoints -= amount;
    std::cout << "FragTrap " << m_name << " takes " << amount << " points of damage!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (m_hitPoints == 0)
        return;
    if (m_energyPoints == 0)
        return;

    m_hitPoints += amount;
    std::cout << "FragTrap " << m_name << " is repaired for " << amount << " points!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << m_name << " is requesting a high five!" << std::endl;
}
