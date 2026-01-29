#include "easyfind.hpp"

int main(void)
{
	std::vector<int> intArray;
	for (int i = 0; i < 10; i++)
		intArray.push_back(i);
	try
	{
		easyfind(intArray, 5);
		easyfind(intArray, 42);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Value not found." << std::endl;
	}
	std::vector<char> charArray;
	for (int i = 'a'; i < 'z'; i++)
		charArray.push_back(i);
	try
	{
		easyfind(charArray, 'e');
		easyfind(charArray, 'z');
	}
	catch (const std::exception& e)
	{
		std::cerr << "Value not found." << std::endl;
	}
}