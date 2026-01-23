#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::Base()
{
	#ifdef DEBUG
	std::cout << "Base constructor called." << std::endl;
	#endif
}

Base::~Base()
{
	#ifdef DEBUG
	std::cout << "Base destructor called." << std::endl;
	#endif
}

Base *generate(void)
{
	struct timeval current;
	gettimeofday(&current, NULL); // Using ms instead of seconds (better randomisation)
	srand(current.tv_usec); // I know i can use time(NULL)
	int random = rand() % 3;
	switch (random)
	{
		case (1):
			return (new A);
		case (2):
			return (new B);
		default:
			return (new C);
	}
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	try 
	{
		(void)(dynamic_cast<A &>(p));
		std::cout << "A" << std::endl;
		return;
	}
	catch (...)
	{}
	try 
	{
		(void)(dynamic_cast<B &>(p));
		std::cout << "B" << std::endl;
		return;
	}
	catch (...)
	{}
	try 
	{
		(void)(dynamic_cast<C &>(p));
		std::cout << "C" << std::endl;
		return;
	}
	catch (...)
	{}
}