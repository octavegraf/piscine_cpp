#include "ScalarConverter.hpp"
#include <cstdlib>
ScalarConverter::ScalarConverter()
{
	#ifdef DEBUG
	std::cout << "ScalarConverter constructor called." << std::endl;
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
	scalarType type = detectType(scalar);
	char c = 0; float f = 0; double d = 0;
	#ifdef DEBUG
	std::cout << "Input: \"" << scalar << "\"" << std::endl;
	#endif
	// Conversion
	switch (type)
	{
		case CHAR:
		{
			c = scalar[0];
			f = static_cast<float>(c);
			d = static_cast<double>(c);
			break;
		}
		case INT:
		{
			d = std::atol(scalar.c_str());
			c = static_cast<char>(d);
			f = static_cast<float>(d);
			break;
		}
		case FLOAT:
		{
			f = std::atof(scalar.c_str());
			c = static_cast<char>(f);
			d = static_cast<double>(f);
			break;
		}
		case DOUBLE:
		{
			d = std::atof(scalar.c_str());
			c = static_cast<char>(d);
			f = static_cast<float>(d);
			break;
		}
		default:
			break;
	}
	#ifdef DEBUG
	std::cout << "Type: " << type << std::endl;
	#endif
	printScalar(type, scalar, c, f, d);
}

scalarType ScalarConverter::detectType(std::string scalar)
{
	int size = scalar.length();
	if (!size)
		return (UNDEFINED);
	if (size == 1)
	{
		if (isalpha(scalar[0]))
			return (CHAR);
		if (isdigit(scalar[0]))
			return (INT);
		return (UNDEFINED);
	}
	if (scalar == "inf" || scalar == "+inf" || scalar == "-inf" ||  scalar == "inff"
		|| scalar == "+inff" || scalar == "-inff" || scalar == "nan" || scalar == "nanf")
		return (SPECIAL);
	bool isFloat = (scalar[size - 1] == 'f');
	bool hasDecimalPoint = (scalar.find('.') != std::string::npos);
	int decimalCount = 0;
	int i = 0;
	if (scalar[0] == '-' || scalar[0] == '+')
		i++;
	if (isFloat)
		size--; // Removes the ending 'f' of float numbers.
	for (; i < (size); i++)
	{
		if (!isdigit(scalar[i]))
		{
			if (scalar[i] == '.')
			{
				decimalCount++;
				if (decimalCount > 1)
					return (UNDEFINED);
			}
			else
				return (UNDEFINED);
		}
	}
	if (hasDecimalPoint)
	{
		if (isFloat)
			return (FLOAT);
		else
			return (DOUBLE);
	}
	else if (isFloat)
		return (FLOAT);
	return (INT);
}

void ScalarConverter::printScalar(scalarType type, std::string scalar, char c, float f, double d)
{
	std::cout << "Char: ";
	if (type == SPECIAL || type == UNDEFINED || c < 0 || c > 127)
		std::cout << IMPOSSIBLE << std::endl;
	else if (!isprint(c))
		std::cout << NOT_PRINTABLE << std::endl;
	else
		std::cout << c << std::endl;

	std::cout << "Int: ";
	if (type == SPECIAL || type == UNDEFINED || d < INT_MIN || d > INT_MAX)
		std::cout << IMPOSSIBLE << std::endl;
	else
		std::cout << d << std::endl;

	std::cout << "Float: ";
	if (type == SPECIAL)
		std::cout << scalar << "f" << std::endl;
	else if (type == UNDEFINED)
		std::cout << IMPOSSIBLE << std::endl;
	else if (type == CHAR || type == INT)
		std::cout << f << ".0f" << std::endl;
	else
		std::cout << f << "f" << std::endl;

	std::cout << "Double: ";
	if (type == SPECIAL)
		std::cout << scalar << std::endl;
	else if (type == UNDEFINED)
		std::cout << IMPOSSIBLE << std::endl;
	else
		std::cout << d << std::endl;
}