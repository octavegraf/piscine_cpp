#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (std::cerr << "Use one argument." << std::endl, 1);
	Harl harl;
	int Filter = harl.complain(argv[1]);
	switch (Filter)
	{
		case 0:
			harl.debug();
		case 1:
			harl.info();
		case 2:
			harl.warning();
		case 3:
			harl.error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}