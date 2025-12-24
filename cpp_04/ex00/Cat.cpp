#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << type << " constructor called" << std::endl;
}

Cat::Cat(const Cat &other)
{
	*this = other;
	std::cout << type << " copy constructor called" << std::endl;
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
	std::cout << type << " destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "« Miaou »" << std::endl;
}