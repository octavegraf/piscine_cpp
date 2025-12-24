#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "ice constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "ice destructor called" << std::endl;
}

Ice::Ice(const Ice &other) : AMateria("ice")
{
	*this = other;
	std::cout << "ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
	(void)other;
	return (*this);
}

AMateria *Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
