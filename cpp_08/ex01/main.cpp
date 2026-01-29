#include "Span.hpp"

int main()
{
	// Trying on Span of size 0
	Span nul = Span();
	try
	{
		nul.shortestSpan();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		nul.longestSpan();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		nul.addNumber(42);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	// Adding numbers using addNumber and testing shortestSpan and longestSpan
	Span sp = Span(5);
	sp.addNumber(3);
	sp.addNumber(9);
	sp.addNumber(6);
	sp.addNumber(11);
	sp.addNumber(17);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	// Same test but with multiple number addition
	Span spa = Span(5);
	int arr[] = {42, 24, 12, 6, 18};
	spa.addNumbers(arr, arr + 5);
	std::cout << spa.shortestSpan() << std::endl;
	std::cout << spa.longestSpan() << std::endl;
	try
	{
		spa.addNumbers(arr, arr + 5);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}