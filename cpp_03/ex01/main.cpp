#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap A("A");
	ScavTrap B("B");
	A.attack("B");
	B.takeDamage(20);
	B.attack("A");
	A.takeDamage(20);
	B.beRepaired(10);
	B.beRepaired(10);
	B.guardGate();
}