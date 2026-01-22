#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	ScalarConverter *converter = NULL;
	if (argc == 2)
		converter->convert(argv[1]);
	else
	{
		std::cout << "/!\\ If you want to make your own tests, run program with one argument." << std::endl;
		converter->convert("A");
		converter->convert("0");
		converter->convert("nan");
		converter->convert("42.0f");
		converter->convert("42..0f");
		converter->convert("2147483648");
		converter->convert("42 a fait miroiter un GPU Nvidia pour au final jamais le donner");
	}
}