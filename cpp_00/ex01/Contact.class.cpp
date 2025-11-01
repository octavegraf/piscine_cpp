#include "Contact.class.hpp"

using namespace std;

Contact::Contact(string FirstName, string LastName, string Nickname, string PhoneNumber, string Secret) : FirstName(FirstName), LastName(LastName), Nickname(Nickname), PhoneNumber(PhoneNumber), Secret(Secret)
{
}

string Contact::GetFirstName() const
{
	return (this->FirstName);
}

string Contact::GetLastName() const
{
	return (this->LastName);
}

string Contact::GetNickname() const
{
	return (this->Nickname);
}

void Contact::PrintContact() const
{
	cout << "\n----------------------------------------\n";
	cout << "First Name: " << this->FirstName << "\n";
	cout << "Last Name: " << this->LastName << "\n";
	cout << "Nickname: " << this->Nickname << "\n";
	cout << "Phone Number: " << this->PhoneNumber << "\n";
	cout << "Secret: " << this->Secret << "\n";
	cout << "----------------------------------------\n";
}