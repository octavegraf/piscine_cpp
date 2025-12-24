#include "Character.hpp"

Character::Character(std::string const & name) : name(name)
{
	for (int i = 0; i < 4; i++)
	{
		inventory[i] = NULL;
		std::cout << name << " inventory slot " << i << " address: " << inventory[i] << std::endl;
	}
	std::cout << "Character constructor called" << std::endl;
}

Character::Character(const Character& src) : name(src.name)
{
	for (int i = 0; i < 4; i++)
	{
		if (src.inventory[i])
			inventory[i] = src.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
	std::cout << "Character copy constructor called" << std::endl;
}

Character& Character::operator=(const Character& src)
{
	if (this != &src)
	{
		name = src.name;
		for (int i = 0; i < 4; i++)
		{
			if (inventory[i])
				delete inventory[i];
			if (src.inventory[i])
				inventory[i] = src.inventory[i]->clone();
			else
				inventory[i] = NULL;
		}
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
}

std::string const &Character::getName() const
{
	return (name);
}

void Character::equip(AMateria *m)
{
	if (!m)
		return;
	
	for (int i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			std::cout << name << " inventory slot " << i << " address: " << inventory[i] << std::endl;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return;
	
	inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4 || !inventory[idx])
		return;
	
	inventory[idx]->use(target);
}