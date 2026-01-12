#include "Bureaucrat.hpp"

int main(void)
{
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
	try
	{
		Bureaucrat C("C", 0);
	}
	catch (const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat D("D", 151);
	}
	catch (const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}

	// Exception increment / decrement tests
	Bureaucrat E("E", 1);
	E.increment();
	Bureaucrat F("F", 150);
	F.decrement();
	return (0);
}