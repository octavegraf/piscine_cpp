#pragma once

#include <iostream>
#include <climits>

enum scalarType
{
	UNDEFINED,
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	SPECIAL
};

#define IMPOSSIBLE "Impossible."
#define NOT_PRINTABLE "Non displayable."

class ScalarConverter
{
	private:
		ScalarConverter();
		static scalarType detectType(std::string scalar);
		static void printScalar(scalarType type, std::string scalar, char c, float f, double d);
	public:
		virtual ~ScalarConverter();
		static void convert(std::string scalar);
};
