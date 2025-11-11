#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie z(name);
	std::cout << "You see ? I just created a Zombie on the stack named \"pile\"." << std::endl;
	std::cout << "He will be destroyed at the end of the function." << std::endl;
}