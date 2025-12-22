#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Dog *d = new Dog;
	// Animal *a = new Animal;
	// std::cout << &a << std::endl;
	std::cout << &d << std::endl;
	delete d;
}