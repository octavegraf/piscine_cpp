#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &_target) : signGrade(145), execGrade(137), AForm("ShrubberyCreationForm", signGrade, execGrade), target(_target)
{
	#ifdef DEBUG
		std::cout << "ShrubberyCreationForm constructor called." << std::endl;
	#endif
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), target(other.target), signGrade(other.signGrade), execGrade(other.execGrade)
{
	if (signGrade != other.signGrade || execGrade != other.execGrade)
		throw AForm::GradeTooHighException();
	#ifdef DEBUG
		std::cout << "ShrubberyCreationForm copy constructor called." << std::endl;
	#endif
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	#ifdef DEBUG
		std::cout << "ShrubberyCreationForm destructor called." << std::endl;
	#endif
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{

}
