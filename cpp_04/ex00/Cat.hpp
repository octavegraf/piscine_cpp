#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);
		~Cat();
		void makeSound() const;
		virtual std::string getType() const;
	protected:
		std::string type;
	private:
};