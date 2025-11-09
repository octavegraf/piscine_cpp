#ifndef MYAWESOMEPHONEBOOK_HPP
#define MYAWESOMEPHONEBOOK_HPP

#include <stdlib.h>
#include <iostream>
#include <string>
#include <ctime>
#include <sys/time.h>
#include <iomanip>

#include "Contact.hpp"
#include "PhoneBook.hpp"

class Contact;
class PhoneBook;

/**
 * @brief Will print String right aligned, truncate it and add a "." if it's longer than 10 char.
 * 
 * @param String String to print.
 */
void PrintTruncateAndRightAlign(std::string String);
/**
 * @brief Wait for user prompt for commands ADD, SEARCH and EXIT.
 * 
 * @param _PhoneBook PhoneBook class.
 * @return true if EXIT command was given, false otherwise.
 */
bool SelectCommands(PhoneBook &_PhoneBook);

#define DOTTED_LINE "----------------------------------------"

#endif