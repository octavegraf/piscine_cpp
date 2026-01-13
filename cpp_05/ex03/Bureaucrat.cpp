#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(const std::string _name, int _grade) : name(_name), grade(_grade)
{
	if (grade < 1)
	{
		
		throw GradeTooHighException();
	}
	else if (grade > 150)
		throw GradeTooLowException();
	#ifdef DEBUG
	std::cout << "Bureaucrat constructor called." << std::endl;
	#endif
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)
{
	#ifdef DEBUG
	std::cout << "Bureaucrat copy constructor called." << std::endl;
	#endif
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		this->grade = other.getGrade();
	}
	#ifdef DEBUG
	std::cout << "Bureaucrat assignment operator called." << std::endl;
	#endif
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	#ifdef DEBUG
	std::cout << "Bureaucrat destructor called." << std::endl;
	#endif
}

void Bureaucrat::increment()
{
	try
	{
		if (grade <= 1)
			throw GradeTooHighException();
		else
			grade--;
	}
	catch (const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void Bureaucrat::decrement()
{
	try
	{
		if (grade >= 150)
			throw GradeTooLowException();
		else
			grade++;
	}
	catch (const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

std::string Bureaucrat::getName() const
{
	return (name);
}

int Bureaucrat::getGrade() const
{
	return (grade);
}


void Bureaucrat::signForm(AForm &form) const
{
	try
	{
		form.beSigned(*this);
	}
	catch (const AForm::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form) const
{
	try
	{
		form.execute(*this);
		std::cout << name << " executed " << form.getName() << "." << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." ;
	return (out);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	#ifdef DEBUG
		return ("GradeTooHighException: Grade is too high.");
	#endif
	return ("Grade is too high.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	#ifdef DEBUG
		return ("GradeTooLowException: Grade is too low.");
	#endif
	return ("Grade is too low.");
}