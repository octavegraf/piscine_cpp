#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hp(10), ep(10), ap(0)
{}

ClapTrap::ClapTrap(std::string _Name) : name(_Name), hp(10), ep(10), ap(0)
{}

ClapTrap::ClapTrap(const ClapTrap &other) : name(other.name), hp(other.hp), ep(other.ep), ap(other.ap)
{}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		name = other.name;
		hp = other.hp;
		ep = other.ep;
		ap = other.ap;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{}

void ClapTrap::attack(const std::string &target)
{
	if (ep > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << "." << std::endl;
		std::cout << "ClapTrap " << name << " have now " << (--ep) << " energy points." << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " have no energy points anymore." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " tooks " << amount<< " damages." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (ep > 0)
	{
		std::cout << "ClapTrap " << name << " repaired itself and gained " << amount<< " HP." << std::endl;
		std::cout << "ClapTrap " << name << " have now " << ++hp << " HP and " << --ep << " EP." << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " have no energy points anymore." << std::endl;
}
