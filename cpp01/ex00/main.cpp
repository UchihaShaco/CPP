#include "Zombie.hpp"

	Zombie* newZombie(std::string name);
	void randomChump(std::string name);
int main()
{
	// testing all the classes
	Zombie *zombie1 = newZombie("Zombie1");
	zombie1->announce();
	randomChump("Zombie2");
	delete zombie1;
	return (0);
	
}