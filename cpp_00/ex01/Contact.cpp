#include "Contact.hpp"

Contact::Contact(std::string FirstName, std::string LastName, std::string Nickname, std::string PhoneNumber, std::string Secret) : FirstName(FirstName), LastName(LastName), Nickname(Nickname), PhoneNumber(PhoneNumber), Secret(Secret)
{}
Contact::~Contact()
{}

std::string Contact::GetFirstName() const
{
	return (this->FirstName);
}

std::string Contact::GetLastName() const
{
	return (this->LastName);
}

std::string Contact::GetNickname() const
{
	return (this->Nickname);
}

void Contact::PrintContact() const
{
	std::cout << std::endl << DOTTED_LINE  << std::endl;
	std::cout << "First Name: " << this->FirstName << std::endl;
	std::cout << "Last Name: " << this->LastName << std::endl;
	std::cout << "Nickname: " << this->Nickname << std::endl;
	std::cout << "Phone Number: " << this->PhoneNumber << std::endl;
	std::cout << "Secret: " << this->Secret << std::endl;
	std::cout << DOTTED_LINE << std::endl;
}