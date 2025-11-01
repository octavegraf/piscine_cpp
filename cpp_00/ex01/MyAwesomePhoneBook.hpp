#ifndef MYAWESOMEPHONEBOOK_HPP
#define MYAWESOMEPHONEBOOK_HPP

#include <stdlib.h>
#include <iostream>
#include <string>
#include <ctime>
#include <sys/time.h>
#include <iomanip>

#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

class Contact;
class PhoneBook;

void PrintTruncateAndRightAlign(string String);
void SelectCommands(PhoneBook &_PhoneBook);

#endif