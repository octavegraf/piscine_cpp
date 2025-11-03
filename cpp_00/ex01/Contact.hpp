#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include "MyAwesomePhoneBook.hpp"

class Contact
{
public:
	Contact(std::string FirstName, std::string LastName, std::string Nickname, std::string PhoneNumber, std::string Secret);
	std::string GetFirstName() const;
	std::string GetLastName() const;
	std::string GetNickname() const;
	void PrintContact() const;

private:
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string Secret;
};

#endif