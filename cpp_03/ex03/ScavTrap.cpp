#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "𝓢𝓬𝓪𝓿𝓣𝓻𝓪𝓹 " << name << " 𝓬𝓸𝓷𝓼𝓽𝓻𝓾𝓬𝓽𝓸𝓻 𝓬𝓪𝓵𝓵𝓮𝓭." << std::endl;
}

ScavTrap::ScavTrap(std::string _Name) : ClapTrap(_Name)
{
	std::cout << "𝓢𝓬𝓪𝓿𝓣𝓻𝓪𝓹 " << name << " 𝓬𝓸𝓷𝓼𝓽𝓻𝓾𝓬𝓽𝓸𝓻 𝓬𝓪𝓵𝓵𝓮𝓭." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	ClapTrap::operator=(other);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "𝓢𝓬𝓪𝓿𝓣𝓻𝓪𝓹 " << name << " 𝓭𝓮𝓼𝓽𝓻𝓾𝓬𝓽𝓸𝓻 𝓬𝓪𝓵𝓵𝓮𝓭." << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "𝓢𝓬𝓪𝓿𝓣𝓻𝓪𝓹 " << name << " 𝓲𝓼 𝓰𝓾𝓪𝓻𝓭𝓲𝓷𝓰." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (ep > 0)
	{
		std::cout << "𝓢𝓬𝓪𝓿𝓣𝓻𝓪𝓹 " << name << " 𝓪𝓽𝓽𝓪𝓬𝓴𝓼 " << target << "." << std::endl;
		std::cout << "𝓢𝓬𝓪𝓿𝓣𝓻𝓪𝓹 " << name << " 𝓱𝓪𝓿𝓮 𝓷𝓸𝔀 " << (--ep) << " 𝓮𝓷𝓮𝓻𝓰𝔂 𝓹𝓸𝓲𝓷𝓽𝓼." << std::endl;
	}
	else
		std::cout << "𝓢𝓬𝓪𝓿𝓣𝓻𝓪𝓹 " << name << " 𝓱𝓪𝓿𝓮 𝓷𝓸 𝓮𝓷𝓮𝓻𝓰𝔂 𝓹𝓸𝓲𝓷𝓽𝓼 𝓪𝓷𝔂𝓶𝓸𝓻𝓮." << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "𝓢𝓬𝓪𝓿𝓣𝓻𝓪𝓹 " << name << " 𝓽𝓸𝓸𝓴𝓼 " << amount<< " 𝓭𝓪𝓶𝓪𝓰𝓮𝓼." << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (ep > 0)
	{
		std::cout << "𝓢𝓬𝓪𝓿𝓣𝓻𝓪𝓹 " << name << " 𝓻𝓮𝓹𝓪𝓲𝓻𝓮𝓭 𝓲𝓽𝓼𝓮𝓵𝓯 𝓪𝓷𝓭 𝓰𝓪𝓲𝓷𝓮𝓭 " << amount<< " 𝓗𝓟." << std::endl;
		std::cout << "𝓢𝓬𝓪𝓿𝓣𝓻𝓪𝓹 " << name << " 𝓱𝓪𝓿𝓮 𝓷𝓸𝔀 " << ++hp << " 𝓗𝓟 𝓪𝓷𝓭 " << --ep << " 𝓔𝓟." << std::endl;
	}
	else
		std::cout << "𝓢𝓬𝓪𝓿𝓣𝓻𝓪𝓹 " << name << " 𝓱𝓪𝓿𝓮 𝓷𝓸 𝓮𝓷𝓮𝓻𝓰𝔂 𝓹𝓸𝓲𝓷𝓽𝓼 𝓪𝓷𝔂𝓶𝓸𝓻𝓮." << std::endl;
}
