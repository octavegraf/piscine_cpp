#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "MyAwesomePhoneBook.hpp"

class PhoneBook
{
public:
	PhoneBook();
	~PhoneBook();
	void AddContact();
	void SearchContact() const;
private:
	class Contact *Contacts[8];
	int Index;
	void PrintContacts() const;
	std::string ValidUserEntry(std::string Prompt);
	std::string ValidPhoneNumber();
};

#endif