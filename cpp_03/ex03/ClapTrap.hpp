#pragma once
#include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string _Name);
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(const ClapTrap &other);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	protected:
		std::string name;
		int hp;
		int ep;
		int ap;
};