#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include "MyAwesomePhoneBook.hpp"

class Contact
{
public:
	Contact(string FirstName, string LastName, string Nickname, string PhoneNumber, string Secret);
	string GetFirstName();
	string GetLastName();
	string GetNickname();
	unsigned long int GetCreationDate();
	void PrintContact();

private:
	string FirstName;
	string LastName;
	string Nickname;
	string PhoneNumber;
	string Secret;
	struct timeval CreationDate;
};

#endif