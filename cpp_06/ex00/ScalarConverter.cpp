#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	#ifdef DEBUG
	std::cout << "ScalarConverter constructor called." << std::endl;
	#endif
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	#ifdef DEBUG
	std::cout << "ScalarConverter copy constructor called." << std::endl;
	#endif
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	#ifdef DEBUG
	std::cout << "ScalarConverter assignement operator called." << std::endl;
	#endif
}

ScalarConverter::~ScalarConverter()
{
	#ifdef DEBUG
	std::cout << "ScalarConverter destructor called." << std::endl;
	#endif
}

void ScalarConverter::convert(std::string scalar)
{
}
