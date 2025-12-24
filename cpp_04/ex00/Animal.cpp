#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << type << " constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	*this = other;
	std::cout << type << " copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << type << " destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "« ... »" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}