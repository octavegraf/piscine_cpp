#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "String memory address: " << &str << std::endl;
	std::cout << "String pointer memory address: " << stringPTR << std::endl;
	std::cout << "String reference memory address: " << &stringREF << std::endl;

	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}