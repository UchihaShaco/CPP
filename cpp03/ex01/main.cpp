#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("Scav");
    scav.attack("target");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();
    
    return 0;
}