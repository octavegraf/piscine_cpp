#include "Zombie.hpp"

Zombie::Zombie(std::string Name) : Name(Name)
{
	announce();
}

Zombie::~Zombie()
{
	std::cout << "[DEBUG] " << this->Name << " destroyed." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->Name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}