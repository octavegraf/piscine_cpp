#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain;
}

Cat::Cat(const Cat &other)
{
	brain = NULL;
	*this = other;
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