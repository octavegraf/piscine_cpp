#include "B.hpp"

B::B()
{
	#ifdef DEBUG
	std::cout << "B constructor called." << std::endl;
	#endif
}

B::~B()
{
	#ifdef DEBUG
	std::cout << "B destructor called." << std::endl;
	#endif
}