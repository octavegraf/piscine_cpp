#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FrAgTrAp " << name << " CoNsTrUcToR cAlLeD." << std::endl;
}

FragTrap::FragTrap(std::string _Name) : ClapTrap(_Name)
{
	std::cout << "FrAgTrAp " << name << " CoNsTrUcToR cAlLeD." << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	ClapTrap::operator=(other);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FrAgTrAp " << name << " DeStRuCtOr CaLlEd." << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FrAgTrAp " << name << ": GuYs... HaVe FiVe?" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (ep > 0)
	{
		std::cout << "FrAgTrAp " << name << " aTtAcKs " << target << "." << std::endl;
		std::cout << "FrAgTrAp " << name << " hAvE nOw " << (--ep) << " eNeRgY pOiNtS." << std::endl;
	}
	else
		std::cout << "FrAgTrAp " << name << " HaVe No EnErGy PoInTs AnYmOrE." << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FrAgTrAp " << name << " tOoKs " << amount << " dAmAgEs." << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (ep > 0)
	{
		std::cout << "FrAgTrAp " << name << " rEpAiReD iTsElF aNd GaInEd " << amount<< " hP." << std::endl;
		std::cout << "FrAgTrAp " << name << " hAvE nOw " << ++hp << " hP aNd " << --ep << " eP." << std::endl;
	}
	else
		std::cout << "FrAgTrAp " << name << "  hAvE nO eNeRgY pOiNtS aNyMoRe." << std::endl;
}
