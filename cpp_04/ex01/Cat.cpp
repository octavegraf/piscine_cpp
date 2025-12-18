#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	Brain *brain = new Brain;
}

Cat::Cat(const Cat &other)
{
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->type = other.type;
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