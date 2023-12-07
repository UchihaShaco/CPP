
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap {

private:
    std::string m_name;

public:
	FragTrap();
    FragTrap(const std::string &name);
    FragTrap(const FragTrap &other);
    ~FragTrap();

    FragTrap &operator=(const FragTrap &other);
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void highFivesGuys(void);
};


#endif
