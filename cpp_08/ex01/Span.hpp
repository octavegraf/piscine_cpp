#pragma once

#include <vector>
#include <iostream>
#include <climits>
#include <algorithm>

class Span
{
	private:
		unsigned int size;
		std::vector<int> intArray;
	public:
		Span();
		Span(unsigned int _size);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();
		void addNumber(int number);
		void addNumbers(int *begin, int *end);
		unsigned int shortestSpan();
		unsigned int longestSpan();
};