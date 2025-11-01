#include "MyAwesomePhoneBook.hpp"

using namespace std;

void PrintTruncateAndRightAlign(string String)
{
	if (String.length() > 10)
	{
		String.resize(9);
		String.append(".");
	}
	cout.width(10); cout << right << String;
}

void SelectCommands(PhoneBook &_PhoneBook)
{
	string Command; cout << "Please type ADD, SEARCH or EXIT.\n";
	if (!getline(cin, Command))
		exit(1);
	if (!Command.compare("ADD"))
		_PhoneBook.AddContact();
	else if(!Command.compare("SEARCH"))
		_PhoneBook.SearchContact();
	else if (!Command.compare("EXIT"))
		exit(0);
	else
		cout << "Wrong command. Try again.\n";
}

int main(void)
{
	PhoneBook PhoneBook;
	while (1)
		SelectCommands(PhoneBook);
	return (0);
}
