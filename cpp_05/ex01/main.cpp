#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	/* Test for previous exercice to show it still works
	Bureaucrat *B = new Bureaucrat("B", 100);
	
	// cout test."
	std::cout << *B << std::endl;

	// Increment / decrement test
	B->increment();
	std::cout << *B << std::endl;
	B->decrement();
	std::cout << *B << std::endl;
	delete B;

	// Exception initialisation test tests
	Bureaucrat C("C", 0);
	Bureaucrat D("D", 151);

	// Exception increment / decrement tests
	Bureaucrat E("E", 1);
	E.increment();
	Bureaucrat F("F", 150);
	F.decrement(); */

	// Classic usage of Bureaucrat and Form
	Bureaucrat *B = new Bureaucrat("B", 45);
	Form *F = new Form("F", 45, 100);
	std::cout << *B << std::endl;
	std::cout << *F << std::endl;
	F->beSigned(*B);
	B->signForm(*F);
	Form G("G", 44, 100);
	B->signForm(G);
	delete B;
	delete F;
	// Trying limits
	try
	{
		Form H("H", 150, 151);
	}
	catch (const Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form H("H", 151, 150);
	}
	catch (const Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}