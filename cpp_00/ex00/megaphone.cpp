#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	{
		if (argc < 2)
			std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		for (int i = 1; i < argc; i++)
		{
			std::string convert = argv[i];
			std::transform(convert.begin(), convert.end(), convert.begin(), ::toupper);
			std::cout << convert;
		}
	}
	std::cout << '\n';
	return (0);
}