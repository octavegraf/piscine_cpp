#pragma once

#include <iostream>

template<typename T>
class Array
{
	private:
		unsigned int _size;
		T *_elements;
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &other);
		Array &operator=(Array const &other);
		~Array();
		unsigned int size() const;
		T &operator[](unsigned int index);
		T const &operator[](unsigned int index) const;
};

#include "Array.tpp"