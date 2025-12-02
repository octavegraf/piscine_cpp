#include "Fixed.hpp"
#include <iostream>

int main(void)
{

	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed c(b - (0.1f));

	std::cout << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;

	std::cout << std::endl;
	std::cout << "a > b: " << (a > b) << std::endl;
	std::cout << "a < b: " << (a < b) << std::endl;
	std::cout << "a >= b: " << (a >= b) << std::endl;
	std::cout << "a <= b: " << (a <= b) << std::endl;
	std::cout << "a == b: " << (a == b) << std::endl;
	std::cout << "a != b: " << (a != b) << std::endl;
	
	std::cout << std::endl;
	std::cout << "a + b = " << (a + b) << std::endl;
	std::cout << "b - a = " << (b - a) << std::endl;
	std::cout << "a * b = " << (a * b) << std::endl;
	std::cout << "b / a = " << (b / a) << std::endl;

	std::cout << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "--a = " << --a << std::endl;
	std::cout << "a-- = " << a-- << std::endl;

	std::cout << std::endl;
	std::cout << "Min between a and b: " << Fixed::min(a, b) << std::endl;
	std::cout << "Max between a and b: " << Fixed::max(a, b) << std::endl;

	return (0);
}