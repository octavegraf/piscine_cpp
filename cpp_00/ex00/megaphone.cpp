#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

int main(int argc, char **argv)
{
	{
		if (argc < 2)
			printf("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
		for (int i = 1; i < argc; i++)
		{
			std::string convert = argv[i];
			std::transform(convert.begin(), convert.end(), convert.begin(), ::toupper);
			printf("%s", convert.c_str());
		}
	}
	printf("\n");
	return (0);
}