#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	for (int i = 0; i < 8; i++)
		Contacts[i] = NULL;
	this->Index = 0;
}

PhoneBook::~PhoneBook()
{
	for (int i = 0; i < 8; i++)
	{
		if (this->Contacts[i])
			delete this->Contacts[i];
	}
}
void PhoneBook::AddContact()
{
	std::string FirstName = ValidUserEntry("First Name");
	std::string LastName = ValidUserEntry("Last Name");
	std::string Nickname = ValidUserEntry("Nickname");
	std::string PhoneNumber = ValidPhoneNumber();
	std::string Secret = ValidUserEntry("Secret");
	if (this->Index >= 7 && this->Contacts[this->Index % 8])
		delete(this->Contacts[this->Index % 8]);
	this->Contacts[this->Index % 8] = new Contact(FirstName, LastName, Nickname, PhoneNumber, Secret);
	this->Index++;
}
void PhoneBook::PrintContacts() const
{
	std::cout << DOTTED_LINE << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (Contacts[i])
		{
			std::cout << (i + 1) << " | ";
			PrintTruncateAndRightAlign(Contacts[i]->GetFirstName()); std::cout << " | ";
			PrintTruncateAndRightAlign(Contacts[i]->GetLastName()); std::cout << " | ";
			PrintTruncateAndRightAlign(Contacts[i]->GetNickname());
			std::cout << std::endl << DOTTED_LINE << std::endl;
		}
	}
}

void PhoneBook::SearchContact() const
{
	std::string UserIndex;
	if (this->Index == 0)
	{
		std::cout << "PhoneBook empty. Add a contact first." << std::endl;
		return;
	}
	PrintContacts();
	std::cout << "Please type an index." << std::endl;
	while (true)
	{
		if (!getline(std::cin, UserIndex))
			std::exit(1);
		if (UserIndex.length() >= 2)
		{
			std::cout << "Wrong index. Try again." << std::endl;
			continue;
		}
		int IntIndex = std::atoi(UserIndex.c_str()) - 1;
		if (IntIndex >= 0 && IntIndex < 8 && IntIndex < this->Index)
		{
			if (Contacts[IntIndex] != NULL)
				this->Contacts[IntIndex]->PrintContact();
			break;
		}
		else
		{
			std::cout << "Wrong index. Try again." << std::endl;
			continue;
		}
	}
}

std::string PhoneBook::ValidUserEntry(std::string Prompt)
{
	std::string Result;
	while (true)
	{
		std::cout << Prompt << ":" << std::endl;
		if (!getline(std::cin, Result))
			continue;
		if (!Result.size())
			continue;
		return (Result);
	}
}

std::string PhoneBook::ValidPhoneNumber()
{
	std::string PhoneNumber;
	bool ValidPhoneNumber;
	while (true)
	{
		ValidPhoneNumber = true;
		PhoneNumber = ValidUserEntry("Phone Number");
		for (size_t i = 0; i < PhoneNumber.length(); ++i)
		{	
			if (!std::isdigit(PhoneNumber[i]))
			{
				ValidPhoneNumber = false;
				break;
			}
		}
		if (ValidPhoneNumber)
			break;
	}
	return (PhoneNumber);
}
