
#pragma once
#include <iostream>
#include <string>

class Zombie
{
private:
	std::string _name;

public:
	Zombie();
	Zombie(std::string _name);
	~Zombie();
	void announce(void) const;
	void randomChump(std::string _name);


};
