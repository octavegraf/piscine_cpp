#include "MyAwesomePhoneBook.hpp"

void PrintTruncateAndRightAlign(std::string String)
{
	if (String.length() > 10)
	{
		String.resize(9);
		String.append(".");
	}
	std::cout.width(10); std::cout << std::right << String;
}

bool SelectCommands(PhoneBook &_PhoneBook)
{
	std::string Command;
	std::cout << "Please type ADD, SEARCH or EXIT." << std::endl;
	if (!getline(std::cin, Command))
		exit(1);
	if (!Command.compare("ADD"))
		_PhoneBook.AddContact();
	else if(!Command.compare("SEARCH"))
		_PhoneBook.SearchContact();
	else if (!Command.compare("EXIT"))
		return (true);
	return (false);
}

int main(void)
{
	PhoneBook *_PhoneBook = new PhoneBook();
	while (!SelectCommands(*_PhoneBook))
		continue;
	delete _PhoneBook;
	return (0);
}
