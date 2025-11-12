#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
public:
	Weapon(std::string type);
	~Weapon();
	std::string getType(void) const;
	void setType(std::string newType);
private:
	std::string type;
};

#endif