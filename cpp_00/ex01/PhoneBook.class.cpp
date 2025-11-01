#include "PhoneBook.class.hpp"

using namespace std;

PhoneBook::PhoneBook()
{
	for (int i = 0; i < 8; i++)
		Contacts[i] = NULL;
	this->Index = 0;
}
void PhoneBook::AddContact()
{
	string FirstName; cout << "First Name:\n"; if (!getline(cin, FirstName)) exit(1);
	string LastName; cout << "Last Name:\n"; if (!getline(cin, LastName)) exit(1);
	string Nickname; cout << "Nickname:\n"; if (!getline(cin, Nickname)) exit(1);
	string PhoneNumber; cout << "Phone Number:\n";
	while (true)
	{
		if (!getline(cin, PhoneNumber))
			exit(1);
		if (!ValidPhoneNumber(PhoneNumber))
			break;
		cout << "Invalid phone number. Try again.\n";
	}
	string Secret; cout << "Secret:\n"; if (!getline(cin, Secret)) exit(1);
	if (this->Index >= 7 && this->Contacts[this->Index % 8])
		delete(this->Contacts[this->Index % 8]);
	this->Contacts[this->Index % 8] = new Contact(FirstName, LastName, Nickname, PhoneNumber, Secret);
	this->Index++;
}
void PhoneBook::PrintContacts() const
{
	cout << "----------------------------------------\n";
	for (int i = 0; i < 8; i++)
	{
		if (Contacts[i])
		{
			cout << (i + 1) ; cout << " | ";
			PrintTruncateAndRightAlign(Contacts[i]->GetFirstName()); cout << " | ";
			PrintTruncateAndRightAlign(Contacts[i]->GetLastName()); cout << " | ";
			PrintTruncateAndRightAlign(Contacts[i]->GetNickname());
			cout << "\n----------------------------------------\n";
		}
	}
}

void PhoneBook::SearchContact() const
{
	string UserIndex;
	if (this->Index == 0)
	{
		cout << "PhoneBook empty. Add a contact first.\n";
		return;
	}
	PrintContacts();
	cout << "Please type an index.\n";
	while (true)
	{
		if (!getline(cin, UserIndex))
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
				cout << "Wrong index. Try again\n";
				continue;
			}
		}
		catch (exception& e)
		{
			cout << "Not a number. Try again\n";
			continue;
		}
	}
}

bool PhoneBook::ValidPhoneNumber(string PhoneNumber) const
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