#include "Zombie.hpp"

Zombie::Zombie(std::string Name) : Name(Name)
{}

Zombie::~Zombie()
{
	std::cout << this->Name << ": killed.";
}

void Zombie::announce()
{
}
