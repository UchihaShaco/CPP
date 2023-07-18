
#pragma once
#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce(void) const;
	void randomChump(std::string name);
	void setName(std::string name);

};
