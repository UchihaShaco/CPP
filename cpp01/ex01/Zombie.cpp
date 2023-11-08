#include "Zombie.hpp"
int	count = 0;
Zombie::Zombie()
{

}

Zombie::Zombie(std::string _name)
{
	this->_name = _name;
}

void Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " has been destroyed." << std::endl;
}
