#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include "MyAwesomePhoneBook.hpp"

class Contact
{
public:
	Contact(string FirstName, string LastName, string Nickname, string PhoneNumber, string Secret);
	string GetFirstName() const;
	string GetLastName() const;
	string GetNickname() const;
	void PrintContact() const;

private:
	string FirstName;
	string LastName;
	string Nickname;
	string PhoneNumber;
	string Secret;
};

#endif