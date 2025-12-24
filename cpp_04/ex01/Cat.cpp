#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain;
	std::cout << type << " constructor called" << std::endl;
}

Cat::Cat(const Cat &other)
{
	brain = NULL;
	*this = other;
	std::cout << type << " copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
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

Cat::~Cat()
{
	std::cout << type << " destructor called" << std::endl;
	delete brain;
}

void Cat::makeSound() const
{
	std::cout << "« Miaou »" << std::endl;
}

Brain *Cat::getBrain()
{
	return (brain);
}