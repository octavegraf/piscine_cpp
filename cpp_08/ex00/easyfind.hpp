#pragma once

#include <list>
#include <vector>
#include <iostream>


template <typename T>
typename T::iterator easyfind(T& container, int toFind)
{
	typename T::iterator start = container.begin();
	typename T::iterator end = container.end();
	while (start != end)
	{
		if (*start == toFind)
		{
			std::cout << "Value " << toFind << " found." << std::endl;
			return (start);
		}
		++start;
	}
	throw std::exception();
}