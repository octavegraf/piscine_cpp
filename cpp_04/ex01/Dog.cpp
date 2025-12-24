#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain;
	std::cout << type << " constructor called" << std::endl;
}

Dog::Dog(const Dog &other)
{
	brain = NULL;
	*this = other;
	std::cout << type << " copy constructor called" << std::endl;
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
	std::cout << type << " destructor called" << std::endl;
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