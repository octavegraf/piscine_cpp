#include "C.hpp"

C::C()
{
	#ifdef DEBUG
	std::cout << "C constructor called." << std::endl;
	#endif
}

C::~C()
{
	#ifdef DEBUG
	std::cout << "C destructor called." << std::endl;
	#endif
}