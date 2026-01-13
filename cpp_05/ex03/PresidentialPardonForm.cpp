#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &_target) : AForm("PresidentialPardonForm", 25, 5), signGrade(25), execGrade(5), target(_target)
{
	#ifdef DEBUG
		std::cout << "PresidentialPardonForm constructor called." << std::endl;
	#endif
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other), signGrade(other.signGrade), execGrade(other.execGrade), target(other.target)
{
	if (signGrade != other.signGrade || execGrade != other.execGrade)
		throw AForm::GradeTooHighException();
	#ifdef DEBUG
		std::cout << "PresidentialPardonForm copy constructor called." << std::endl;
	#endif
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this != &other)
	{
		if (signGrade != other.signGrade || execGrade != other.execGrade)
			throw AForm::GradeTooHighException();
		AForm::operator=(other);
	}
	#ifdef DEBUG
		std::cout << "PresidentialPardonForm assignment operator called." << std::endl;
	#endif
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	#ifdef DEBUG
		std::cout << "PresidentialPardonForm destructor called." << std::endl;
	#endif
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (getIsSigned() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > getExecGrade())
		throw AForm::GradeTooLowException();
	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	#ifdef DEBUG
		std::cout << "PresidentialPardonForm executed by " << executor.getName() << "." << std::endl;
	#endif
}
