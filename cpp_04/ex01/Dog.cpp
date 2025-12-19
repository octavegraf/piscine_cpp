#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain;
}

Dog::Dog(const Dog &other)
{
	brain = NULL;
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->type = other.type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*other.brain);
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

Brain *Dog::getBrain()
{
	return (brain);
}