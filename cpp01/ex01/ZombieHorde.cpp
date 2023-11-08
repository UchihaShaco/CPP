
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string _name ){	
	int i = 0;

	Zombie* hord;
	hord = new Zombie[N];

	while (i < N)
	{
		hord[i] = Zombie(_name); 
		i++;
	}
		return hord;
}