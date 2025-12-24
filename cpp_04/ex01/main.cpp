#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal *arch[100];

	for (int i = 0; i < 100; i++)
	{
		if (i < 50)
			arch[i] = new Dog;
		else
			arch[i] = new Cat;
	}
	for (int i = 0; i < 100; i++)
	{
		delete arch[i];
	}

	Dog dog1;
	dog1.getBrain()->ideas[0] = "Bone";
	Dog dog2 = dog1;
	std::cout << "dog1: " << dog1.getBrain()->ideas[0] << " " << dog1.getBrain() << std::endl;
	std::cout << "dog2: " << dog2.getBrain()->ideas[0] << " " << dog2.getBrain() << std::endl;
}