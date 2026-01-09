#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string _name, const int signGrade, const int execGrade) : name(_name), isSigned(false), signGrade(signGrade), execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
	#ifdef DEBUG
	std::cout << "Form constructor called." << std::endl;
	#endif
}

Form::Form(const Form &other) : name(other.name), isSigned(other.isSigned), signGrade(other.signGrade), execGrade(other.execGrade)
{
	#ifdef DEBUG
	std::cout << "Form copy constructor called." << std::endl;
	#endif
}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
	{
		this->isSigned = other.isSigned;
	}
	#ifdef DEBUG
	std::cout << "Form assignment operator called." << std::endl;
	#endif
	return (*this);
}

Form::~Form()
{
	#ifdef DEBUG
	std::cout << "Form destructor called." << std::endl;
	#endif
}

std::string Form::getName() const
{
	return (name);
}

bool Form::getIsSigned() const
{
	return (isSigned);
}

int Form::getSignGrade() const
{
	return (signGrade);
}

int Form::getExecGrade() const
{
	return (execGrade);
}

void Form::beSigned(const Bureaucrat &bureaucrat)
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
	catch (const Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
		return ;
	}
	isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Form::GradeTooHighException: Grade is too high.");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Form::GradeTooLowException: Grade is too low.");
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	out << form.getName() << ", form sign grade " << form.getSignGrade() << ", exec grade " << form.getExecGrade() << ", is " << (form.getIsSigned() ? "signed." : "not signed.");
	return (out);
}