#include "Span.hpp"

Span::Span()
{
	size = 0;
	#ifdef DEBUG
	std::cout << "Span default constructor called." << std::endl;
	#endif
}

Span::Span(unsigned int _size) : size(_size)
{
	#ifdef DEBUG
	std::cout << "Span default constructor called." << std::endl;
	#endif
}

Span::Span(const Span& other)
{
	*this = other;
	#ifdef DEBUG
	std::cout << "Span copy constructor called." << std::endl;
	#endif
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		size = other.size;
	}
	#ifdef DEBUG
	std::cout << "Span assignment operator called." << std::endl;
	#endif
	return *this;
}

Span::~Span()
{
	#ifdef DEBUG
	std::cout << "Span destructor called." << std::endl;
	#endif
}

void Span::addNumber(int number)
{
	if (intArray.size() >= size)
		throw std::out_of_range("No more space. Operation aborted.");
	intArray.push_back(number);
	std::sort(intArray.begin(), intArray.end()); // Sorted at every insertion instead of sorting when needed
}

void Span::addNumbers(int *begin, int *end)
{
	std::vector<int> array(begin, end);
	if (intArray.size() + array.size() > size)
		throw std::out_of_range("No more space for all numbers. Operation aborted.");
	for (std::vector<int>::iterator it = array.begin(); it != array.end(); ++it)
		intArray.push_back(*it);
	std::sort(intArray.begin(), intArray.end());
}

unsigned int Span::shortestSpan()
{
	int span = INT_MAX;
	if (intArray.size() < 2)
		throw std::out_of_range("Need 2 int to find a span.");
	for (unsigned int i = 1; i < intArray.size(); i++)
	{
		if (intArray[i] - intArray[i - 1] < span)
			span = intArray[i] - intArray[i - 1];
	}
	return (span);
}
unsigned int Span::longestSpan()
{
	if (intArray.size() < 2)
		throw std::out_of_range("Need 2 int to find a span.");
	return (intArray.back() - intArray.front());
}


