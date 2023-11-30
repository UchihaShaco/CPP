#include "FragTrap.hpp"

int main()
{
    FragTrap frag("Frag");
    frag.attack("target");
    frag.takeDamage(20);
    frag.beRepaired(10);
    frag.highFivesGuys();
    return 0;
}