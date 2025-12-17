#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string _Name) : ClapTrap(_Name), ScavTrap(_Name), FragTrap(_Name), name(_Name + "_clap_name")
{
	hp = FragTrap::hp;
	ep = ScavTrap::ep;
	ap = FragTrap::ap;
	std::cout << "DiamondTrap " << name << " constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other), name(other.name)
{
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	ClapTrap::operator=(other);
	name = other.name;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << " destructor called." << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap " << name << " is a DiamondTrap created from " << ClapTrap::name << "." << std::endl;
}
