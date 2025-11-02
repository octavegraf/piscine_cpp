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

using namespace std;

class Contact;
class PhoneBook;

/**
 * @brief Will print String right aligned, truncate it and add a "." if it's longer than 10 char.
 * 
 * @param String String to print.
 */
void PrintTruncateAndRightAlign(string String);
/**
 * @brief Wait for user prompt for commands ADD, SEARCH and EXIT.
 * 
 * @param _PhoneBook PhoneBook class.
 */
void SelectCommands(PhoneBook &_PhoneBook);

#endif