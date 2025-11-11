#include "Zombie.hpp"

void likeHere(Zombie *z)
{
	(void)z;
	std::cout << "Like here !" << std::endl;
}

int main(void)
{
	std::cout << "Welcome. Today we are gonna see the difference in C++ between allocating on the heap and on the stack. Let's start with the heap." << std::endl;
	randomChump("pile");
	std::cout << "Now creating a zombie on the heap using new." << std::endl;
	Zombie *heap = newZombie("tas");
	std::cout << "It returned a pointed. I can use it anywhere now." << std::endl;
	likeHere(heap);
	std::cout << "Let's delete it now." << std::endl;
	delete heap;
	std::cout << "Thank you for followers of this course. See you later." << std::endl;
	return (0);
}