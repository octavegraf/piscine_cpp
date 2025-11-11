#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <stdlib.h>

class Zombie
{
public:
	Zombie(std::string Name);
	~Zombie();
	void announce();

private:
	std::string Name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif