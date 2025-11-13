#include "main.hpp"

int replaceString(std::string fileName, std::string toFind, std::string toReplace)
{
	std::string buffer;
	std::ifstream file(fileName.c_str());
	char c;
	size_t pos = 0;

	if (!file.is_open())
		return (std::cerr << "Error: open." << std::endl, 1);
	std::ofstream tempFile((fileName + ".temp").c_str());
	if (!tempFile.is_open())
		return (std::cerr << "Error: open." << std::endl, file.close(), 1);
	while (file.get(c))
		buffer += c;
	while ((pos = buffer.find(toFind, pos)) != std::string::npos)
	{
		buffer = buffer.substr(0, pos) + toReplace + buffer.substr(pos + toFind.length());
		pos += toReplace.length();
	}
	tempFile << buffer;
	file.close();
	tempFile.close();
	if (std::remove(fileName.c_str()))
		return (std::cerr << "Error: remove." << std::endl, 1);
	if (std::rename((fileName + ".temp").c_str(), fileName.c_str()))
		return (std::cerr << "Error: rename." << std::endl, std::remove((fileName + ".tmp").c_str()), 1);
	return (0);
}

int main(int argc, char **argv)
{
	std::string fileName, toFind, toReplace;
	std::ifstream fileStream;
	if (argc == 4)
		return (replaceString(argv[1], argv[2], argv[3]));
	else
		return (std::cerr << "Error: You need 3 arguments to use the program."
			<< std::endl, 1);
}