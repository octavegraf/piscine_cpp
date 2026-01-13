#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat boss("Boss", 1);
		Bureaucrat employee("Employee", 140);
		Bureaucrat intern("Intern", 150);

		ShrubberyCreationForm shrubbery("Office");
		RobotomyRequestForm robotomy("Bender");
		PresidentialPardonForm pardon("White House");

		intern.signForm(robotomy);
		intern.executeForm(robotomy);
		employee.signForm(shrubbery);
		employee.executeForm(shrubbery);
		boss.executeForm(robotomy);
		boss.signForm(robotomy);
		boss.executeForm(robotomy);
		boss.signForm(pardon);
		boss.executeForm(pardon);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	// Test limits
	try
	{
		Bureaucrat god("God", -1);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat ant("Ant", 151);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}