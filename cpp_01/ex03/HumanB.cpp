#include "HumanB.hpp"

HumanB::HumanB(std::string name) : Name(name)
{
	this->weapon = NULL;
}

HumanB::~HumanB()
{}

void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack(void)
{
	std::cout << this->Name << " attacks with their " << this->weapon->getType() << std::endl;
}
