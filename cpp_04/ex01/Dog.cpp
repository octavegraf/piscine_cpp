#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	Brain *brain = new Brain;
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
{
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << "« Waf »" << std::endl;
}