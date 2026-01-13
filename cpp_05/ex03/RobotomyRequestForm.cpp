#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &_target) : AForm("RobotomyRequestForm", 72, 45), signGrade(72), execGrade(45), target(_target)
{
	#ifdef DEBUG
		std::cout << "RobotomyRequestForm constructor called." << std::endl;
	#endif
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other), signGrade(other.signGrade), execGrade(other.execGrade), target(other.target)
{
	if (signGrade != other.signGrade || execGrade != other.execGrade)
		throw AForm::GradeTooHighException();
	#ifdef DEBUG
		std::cout << "RobotomyRequestForm copy constructor called." << std::endl;
	#endif
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
	{
		if (signGrade != other.signGrade || execGrade != other.execGrade)
			throw AForm::GradeTooHighException();
		AForm::operator=(other);
	}
	#ifdef DEBUG
		std::cout << "RobotomyRequestForm assignment operator called." << std::endl;
	#endif
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	#ifdef DEBUG
		std::cout << "RobotomyRequestForm destructor called." << std::endl;
	#endif
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (getIsSigned() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > getExecGrade())
		throw AForm::GradeTooLowException();
	std::cout << "Bzzzzzzzz... Vrrrrrrr... Bzzzzzzzz..." << std::endl;
	time_t t;
	time(&t);
	if (t % 2 == 0)
		std::cout << target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "The robotomy failed on " << target << "." << std::endl;
	#ifdef DEBUG
		std::cout << "RobotomyRequestForm executed by " << executor.getName() << "." << std::endl;
	#endif
}
