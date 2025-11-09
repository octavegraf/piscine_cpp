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
	std::string FirstName = ValidUserEntry("First Name:\n");
	std::string LastName = ValidUserEntry("Last Name:\n");
	std::string Nickname = ValidUserEntry("Nickname:\n");
	std::string PhoneNumber = ValidPhoneNumber();
	std::string Secret = ValidUserEntry("Secret:\n");
	if (this->Index >= 7 && this->Contacts[this->Index % 8])
		delete(this->Contacts[this->Index % 8]);
	this->Contacts[this->Index % 8] = new Contact(FirstName, LastName, Nickname, PhoneNumber, Secret);
	this->Index++;
}
void PhoneBook::PrintContacts() const
{
	std::cout << "----------------------------------------\n";
	for (int i = 0; i < 8; i++)
	{
		if (Contacts[i])
		{
			std::cout << (i + 1) ; std::cout << " | ";
			PrintTruncateAndRightAlign(Contacts[i]->GetFirstName()); std::cout << " | ";
			PrintTruncateAndRightAlign(Contacts[i]->GetLastName()); std::cout << " | ";
			PrintTruncateAndRightAlign(Contacts[i]->GetNickname());
			std::cout << "\n----------------------------------------\n";
		}
	}
}

void PhoneBook::SearchContact() const
{
	std::string UserIndex;
	if (this->Index == 0)
	{
		std::cout << "PhoneBook empty. Add a contact first.\n";
		return;
	}
	PrintContacts();
	std::cout << "Please type an index.\n";
	while (true)
	{
		if (!getline(std::cin, UserIndex))
			exit(1);
		if (UserIndex.length() >= 2)
		{
			std::cout << "Wrong index. Try again\n";
			continue;
		}
		int IntIndex = atoi(UserIndex.c_str()) - 1;
		if (IntIndex >= 0 && IntIndex < 8 && IntIndex < this->Index)
		{
			if (Contacts[IntIndex] != NULL)
				this->Contacts[IntIndex]->PrintContact();
			break;
		}
		else
		{
			std::cout << "Wrong index. Try again\n";
			continue;
		}
	}
}

std::string PhoneBook::ValidUserEntry(std::string Prompt)
{
	std::string Result;
	while (true)
	{
		std::cout << Prompt;
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
		PhoneNumber = ValidUserEntry("Phone Number:\n");
		for (size_t i = 0; i < PhoneNumber.length(); ++i)
		{	
			if (!isdigit(PhoneNumber[i]))
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
