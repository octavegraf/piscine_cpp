#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
}

Animal::Animal(const Animal &other)
{
	*this = other;
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
{}

void Animal::makeSound() const
{
	std::cout << "« ... »" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}