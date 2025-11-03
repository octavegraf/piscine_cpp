#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "MyAwesomePhoneBook.hpp"

class PhoneBook
{
public:
	PhoneBook();
	void AddContact();
	void SearchContact() const;
	~PhoneBook();
private:
	class Contact *Contacts[8];
	int Index;
	void PrintContacts() const;
	bool ValidPhoneNumber(std::string PhoneNumber) const;
};

#endif