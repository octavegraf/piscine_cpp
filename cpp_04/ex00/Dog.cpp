#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
}

Dog::Dog(const Dog &other)
{
	*this = other;
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
{}

void Dog::makeSound() const
{
	std::cout << "« Waf »" << std::endl;
}

std::string Dog::getType() const
{
	return (type);
}