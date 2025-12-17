#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap A("A");
	ClapTrap B("B");
	A.attack("B");
	B.takeDamage(1);
	for (int i = 0; i < 11; i++)
	{
		B.beRepaired(1);
	}
}