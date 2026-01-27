#include "Array.hpp"

template <typename T>
Array<T>::Array() : _size(0), _elements(NULL)
{
	#ifdef DEBUG
	std::cout << "Default constructor called." <<  std::endl;
	#endif
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n), _elements(new T[n])
{
	#ifdef DEBUG
	std::cout << "Default constructor called." <<  std::endl;
	#endif
}

template <typename T>
Array<T>::Array(Array const &other)
{
	_size = other._size;
	_elements = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_elements[i] = other._elements[i];
	#ifdef DEBUG
	std::cout << "Copy constructor called." <<  std::endl;
	#endif
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &other)
{
	if (this != &other)
	{
		delete[] _elements;
		_size = other._size;
		_elements = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_elements[i] = other._elements[i];
	}
	return (*this);
	#ifdef DEBUG
	std::cout << "Assignment operator called." <<  std::endl;
	#endif
}

template <typename T>
Array<T>::~Array()
{
	delete[] _elements;
	#ifdef DEBUG
	std::cout << "Destructor called." <<  std::endl;
	#endif
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (_size);
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::out_of_range("Index out of bounds.");
	return (_elements[index]);
}

template <typename T>
T const &Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw std::out_of_range("Index out of bounds.");
	return (_elements[index]);
}