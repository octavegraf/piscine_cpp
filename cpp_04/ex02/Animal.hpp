#pragma once
#include "Brain.hpp"
#include <iostream>

class Animal : public Brain
{
	protected:
		Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		virtual ~Animal();
		virtual void makeSound() const;
		virtual std::string getType() const;
		std::string type;
	private:
};