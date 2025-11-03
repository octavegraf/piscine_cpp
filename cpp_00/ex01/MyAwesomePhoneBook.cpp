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

void SelectCommands(PhoneBook &_PhoneBook)
{
	std::string Command; std::cout << "Please type ADD, SEARCH or EXIT.\n";
	if (!getline(std::cin, Command))
		exit(1);
	if (!Command.compare("ADD"))
		_PhoneBook.AddContact();
	else if(!Command.compare("SEARCH"))
		_PhoneBook.SearchContact();
	else if (!Command.compare("EXIT"))
		exit(0);
	else
		std::cout << "Wrong command. Try again.\n";
}

int main(void)
{
	PhoneBook PhoneBook;
	while (1)
		SelectCommands(PhoneBook);
	return (0);
}
