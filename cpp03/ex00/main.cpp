#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("Clap");
    clap.attack("target");
    clap.takeDamage(20);
    clap.beRepaired(10);
    
    return 0;
}