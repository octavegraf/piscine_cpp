#pragma once

#include <iostream>

template <typename T, typename Q, typename R>
void iter(T *array, Q const &lenght, R function)
{
	for (int i = 0; i < lenght; i++)
	{
		function(array[i]);
	}
}


template <typename T>
void increment(T &param)
{
	param++;
}

template <typename T>
void print(T const &param)
{
	std::cout << param;
}

