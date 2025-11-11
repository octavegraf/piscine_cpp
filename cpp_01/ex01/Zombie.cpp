#include "Zombie.hpp"

Zombie::Zombie()
{}

void Zombie::givename(std::string Name)
{
	this->Name = Name;
}

Zombie::~Zombie()
{
	std::cout << "[DEBUG] " << this->Name << " destroyed." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->Name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}