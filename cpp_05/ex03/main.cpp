#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	/* // Tests from previous exercises
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
	} */
	try
	{
		Intern osefIntern;
		AForm *form1 = osefIntern.makeForm("robotomy request", "Test");
		std::cout << form1 << std::endl;
		AForm *form2 = osefIntern.makeForm("shrubbery creation", "Test2");
		std::cout << form2 << std::endl;
		AForm *form3 = osefIntern.makeForm("presidential pardon", "Test3");
		std::cout << form3 << std::endl;
		AForm *form4 = osefIntern.makeForm("walkj;lasdjlksadj", "Test4");
		std::cout << form4 << std::endl;
		delete form1;
		delete form2;
		delete form3;
		delete form4;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	// Test from subject
	try
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << rrf << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}