#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : Name(name), weapon(weapon)
{}

HumanA::~HumanA()
{}

void HumanA::attack(void)
{
	std::cout << this->Name << " attacks with their " << this->weapon.getType() << std::endl;
}
