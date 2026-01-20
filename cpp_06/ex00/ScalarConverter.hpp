#pragma once

#include <iostream>

class ScalarConverter
{
	private:
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter& operator=(const ScalarConverter &other);
		virtual ~ScalarConverter();
		static void convert(std::string scalar);
};

enum number_type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE
};