#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
		ScalarConverter::convert(argv[1]);
	else
	{
		std::cout << "/!\\ If you want to make your own tests, run program with one argument." << std::endl;
		ScalarConverter::convert("A");
		ScalarConverter::convert("0");
		ScalarConverter::convert("nan");
		ScalarConverter::convert("42.8");
		ScalarConverter::convert("42..0f");
		ScalarConverter::convert("2147483648");
		ScalarConverter::convert("42 a fait miroiter un GPU Nvidia pour au final jamais le donner");
	}
}