#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string _name, const int signGrade, const int execGrade) : name(_name), isSigned(false), signGrade(signGrade), execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
	#ifdef DEBUG
	std::cout << "AForm constructor called." << std::endl;
	#endif
}

AForm::AForm(const AForm &other) : name(other.name), isSigned(other.isSigned), signGrade(other.signGrade), execGrade(other.execGrade)
{
	#ifdef DEBUG
	std::cout << "AForm copy constructor called." << std::endl;
	#endif
}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
	{
		this->isSigned = other.isSigned;
	}
	#ifdef DEBUG
	std::cout << "AForm assignment operator called." << std::endl;
	#endif
	return (*this);
}

AForm::~AForm()
{
	#ifdef DEBUG
	std::cout << "AForm destructor called." << std::endl;
	#endif
}

std::string AForm::getName() const
{
	return (name);
}

bool AForm::getIsSigned() const
{
	return (isSigned);
}

int AForm::getSignGrade() const
{
	return (signGrade);
}

int AForm::getExecGrade() const
{
	return (execGrade);
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (isSigned)
	{
		std::cout << name << " is already signed." << std::endl;
		return ;
	}
	try
	{
		if (bureaucrat.getGrade() > signGrade)
			throw GradeTooLowException();
		else
			std::cout << bureaucrat.getName() << " signed " << name << "." << std::endl;
	}
	catch (const AForm::GradeTooLowException& e)
	{
		std::cerr << bureaucrat.getName() << " couldn't sign " << name << " because " << e.what() << std::endl;
		return ;
	}
	isSigned = true;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.");
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return ("Form is not signed.");
}

std::ostream &operator<<(std::ostream &out, const AForm &Aform)
{
	out << Aform.getName() << ", Aform sign grade " << Aform.getSignGrade() << ", exec grade " << Aform.getExecGrade() << ", is " << (Aform.getIsSigned() ? "signed." : "not signed.");
	return (out);
}