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
	std::cout << "\n----------------------------------------\n";
	std::cout << "First Name: " << this->FirstName << "\n";
	std::cout << "Last Name: " << this->LastName << "\n";
	std::cout << "Nickname: " << this->Nickname << "\n";
	std::cout << "Phone Number: " << this->PhoneNumber << "\n";
	std::cout << "Secret: " << this->Secret << "\n";
	std::cout << "----------------------------------------\n";
}