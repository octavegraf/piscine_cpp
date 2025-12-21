#pragma once
#include <iostream>
#include "AMateria.hpp"

class Character : public ICharacter
{
	public:
		Character(std::string _name);
		~Character();
		std::string const & getName() const override;
		void equip(AMateria* m) override;
		void unequip(int idx) override;
		void use(int idx, ICharacter& target) override;
	private:
		std::string name;
};