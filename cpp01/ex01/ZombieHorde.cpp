
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){	
	int i = 0;

	Zombie* hord;
	hord = new Zombie[N]; 


	while (i < N)
	{
		hord[i].setName(name);
		i++;
	}
		return hord;
}