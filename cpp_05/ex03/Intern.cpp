#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	#ifdef DEBUG
		std::cout << "Intern constructor called." << std::endl;
	#endif
}

Intern::Intern(const Intern &other)
{
	(void)other;
	#ifdef DEBUG
		std::cout << "Intern copy constructor called." << std::endl;
	#endif
}

Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	#ifdef DEBUG
		std::cout << "Intern assignment operator called." << std::endl;
	#endif
	return (*this);
}

Intern::~Intern()
{
	#ifdef DEBUG
		std::cout << "Intern destructor called." << std::endl;
	#endif
}

AForm *Intern::makeForm(const std::string &formName, const std::string &target) const
{
	std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++)
	{
		if (formName == forms[i])
		{
			switch (i)
			{
				case 0:
					#ifdef DEBUG
						std::cout << "Intern creates ShrubberyCreationForm." << std::endl;
					#endif
					return (new ShrubberyCreationForm(target));
				case 1:
					#ifdef DEBUG
						std::cout << "Intern creates RobotomyRequestForm." << std::endl;
					#endif
					return (new RobotomyRequestForm(target));
				case 2:
					#ifdef DEBUG
						std::cout << "Intern creates PresidentialPardonForm." << std::endl;
					#endif
					return (new PresidentialPardonForm(target));
			}
		}
	}
	throw std::runtime_error("Intern could not create form: Unknown form name.");
	return (NULL);
}
