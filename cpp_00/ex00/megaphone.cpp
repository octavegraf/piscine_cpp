#include <iostream>
#include <string>


using namespace std;

int main(int argc, char **argv)
{
	{
		if (argc < 2)
			cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		for (int i = 1; i < argc; i++)
		{
			string convert = argv[i];
			transform(convert.begin(), convert.end(), convert.begin(), ::toupper);
			cout << convert;
		}
	}
	cout << '\n';
	return (0);
}