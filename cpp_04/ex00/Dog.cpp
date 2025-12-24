#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << type << " constructor called" << std::endl;
}

Dog::Dog(const Dog &other)
{
	*this = other;
	std::cout << type << " copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << type << " destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "« Waf »" << std::endl;
}