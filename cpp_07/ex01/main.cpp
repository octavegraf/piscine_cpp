#include "iter.hpp"

int main(void)
{
	char array[4] = {'S', 'D', 'R', 'S'};
	iter(array, 4, print<const char>);
	std::cout << std::endl;
	iter(array, 4, increment<char>);
	iter(array, 4, print<const char>);
	std::cout << std::endl;
	int maths[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	const int size = 10;
	iter(maths, size, print<const int>);
	std::cout << std::endl;
	iter(maths, size, increment<int>);
	iter(maths, size, print<const int>);
	std::cout << std::endl;
}