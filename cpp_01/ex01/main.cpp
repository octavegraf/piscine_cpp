#include "Zombie.hpp"

int main(void)
{
	std::cout << "New lesson. Today, we create a Zombie horde! We're going to create 9 of them." << std::endl;
	std::cout << "They will announce themselves now." << std::endl;
	Zombie* nine = zombieHorde(9, "novem");
	delete[] nine;
	std::cout << "See you next time. Use make fsanitize to check leaks." << std::endl;
	return (0);
}