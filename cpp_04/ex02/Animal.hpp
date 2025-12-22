#pragma once
#include "Brain.hpp"
#include <iostream>

class Animal : public Brain
{
	public:
		Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		virtual ~Animal() = 0;
		virtual void makeSound() const;
		virtual std::string getType() const;
	protected:
		std::string type;
	private:
};