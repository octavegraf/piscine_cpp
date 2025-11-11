#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <stdlib.h>

class Zombie
{
public:
	Zombie(void);
	~Zombie(void);
	void announce(void);
	void givename(std::string Name);
private:
	std::string Name;
};

Zombie* zombieHorde(int N, std::string name);

#endif