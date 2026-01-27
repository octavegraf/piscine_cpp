#include "Array.hpp"

int main(void)
{
	// Allocation and modification of array of int
	Array<int> *intArray = new Array<int>(5);
	for (unsigned int i = 0; i < intArray->size(); i++)
		(*intArray)[i] = i;
	for (unsigned int i = 0; i < intArray->size(); i++)
		std::cout << (*intArray)[i];
	std::cout << std::endl;
	for (unsigned int i = 0; i < intArray->size(); i++)
		(*intArray)[i] = i + 5;
	for (unsigned int i = 0; i < intArray->size(); i++)
		std::cout << (*intArray)[i];
	std::cout << std::endl;
	delete intArray;

	// Allocation of array of string
	Array<std::string> *stringArray = new Array<std::string>(3);
	(*stringArray)[0] = "Hello";
	(*stringArray)[1] = "World";
	(*stringArray)[2] = "!";
	for (unsigned int i = 0; i < stringArray->size(); i++)
		std::cout << (*stringArray)[i] << " ";
	std::cout << std::endl;
	delete stringArray;

	// Allocation of array of char
	Array<char> charArray(26);
	for (unsigned int i = 0; i < charArray.size(); i++)
		charArray[i] = i + 'A';
	for (unsigned int i = 0; i < charArray.size(); i++)
		std::cout << charArray[i];
	std::cout << std::endl;
	for (unsigned int i = 0; i < charArray.size(); i++)
		charArray[i] = i + 'a';
	for (unsigned int i = 0; i < charArray.size(); i++)
		std::cout << charArray[i];
	std::cout << std::endl;
	try
	{
		charArray[26] = '!'; // Trying to write ouf of range
	}
	catch (std::out_of_range &e)
	{
		std::cerr << e.what() << std::endl;
	};
	// Test default constructor
	Array<float> emptyConstructorArray;
	std::cout << "Default array size: " << emptyConstructorArray.size() << std::endl;

	// Test copy constructor
	Array<char> copyArray(charArray);
	for (unsigned int i = 0; i < copyArray.size(); i++)
		std::cout << copyArray[i];
	std::cout << std::endl;

	// Test assignment operator
	Array<char> assignArray;
	assignArray = charArray;
	for (unsigned int i = 0; i < assignArray.size(); i++)
		std::cout << assignArray[i];
	std::cout << std::endl;
	return (0);
}