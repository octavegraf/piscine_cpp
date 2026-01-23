#include "A.hpp"

A::A()
{
	#ifdef DEBUG
	std::cout << "A constructor called." << std::endl;
	#endif
}

A::~A()
{
	#ifdef DEBUG
	std::cout << "A destructor called." << std::endl;
	#endif
}