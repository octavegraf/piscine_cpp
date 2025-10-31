#include "Contact.class.hpp"

Contact::Contact(string FirstName, string LastName, string Nickname, string PhoneNumber, string Secret) : FirstName(FirstName), LastName(LastName), Nickname(Nickname), PhoneNumber(PhoneNumber), Secret(Secret)
{
	if (gettimeofday(&this->CreationDate, NULL))
		throw "gettimeofday failed";
}

string Contact::GetFirstName()
{
	return (this->FirstName);
}

string Contact::GetLastName()
{
	return (this->LastName);
}

string Contact::GetNickname()
{
	return (this->Nickname);
}

unsigned long int Contact::GetCreationDate()
{
	return (this->CreationDate.tv_sec);
}
