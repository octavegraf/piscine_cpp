#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	for (int i = 0; i < 8; i++)
		Contacts[i] = NULL;
	this->Index = 0;
}
void PhoneBook::AddContact()
{
	std::string FirstName; std::cout << "First Name:\n"; if (!getline(std::cin, FirstName)) exit(1);
	std::string LastName; std::cout << "Last Name:\n"; if (!getline(std::cin, LastName)) exit(1);
	std::string Nickname; std::cout << "Nickname:\n"; if (!getline(std::cin, Nickname)) exit(1);
	std::string PhoneNumber; std::cout << "Phone Number:\n";
	while (true)
	{
		if (!getline(std::cin, PhoneNumber))
			exit(1);
		if (!ValidPhoneNumber(PhoneNumber))
			break;
		std::cout << "Invalid phone number. Try again.\n";
	}
	std::string Secret; std::cout << "Secret:\n"; if (!getline(std::cin, Secret)) exit(1);
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
		try
		{
			int IntIndex = stoi(UserIndex) - 1;
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
		catch (std::exception& e)
		{
			std::cout << "Not a number. Try again\n";
			continue;
		}
	}
}

bool PhoneBook::ValidPhoneNumber(std::string PhoneNumber) const
{
	for (size_t i = 0; i < PhoneNumber.length(); ++i)
	{
		if (!isdigit(PhoneNumber[i]))
			return (true);
	}
	return (false);
}

PhoneBook::~PhoneBook()
{
}