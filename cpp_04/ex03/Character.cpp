#include "Character.hpp"

Character::Character(std::string _name) : ICharacter(_name)
{}

Character::~Character()
{
}

std::string const &Character::getName() const
{
	return (name);
}

void Character::equip(AMateria *m)
{
}

void Character::unequip(int idx)
{
}

void Character::use(int idx, ICharacter &target)
{
}
