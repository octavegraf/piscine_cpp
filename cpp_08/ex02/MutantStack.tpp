#include "MutantStack.hpp"

template <typename T> MutantStack<T>::MutantStack()
{
	#ifdef DEBUG
	std::cout << "MutantStack default constructor called." << std::endl;
	#endif
}
template <typename T> MutantStack<T>::MutantStack(MutantStack<T> const &other)
{
	*this = other;
	#ifdef DEBUG
	std::cout << "MutantStack copy constructor called." << std::endl;
	#endif
}

template <typename T> MutantStack<T>::MutantStack(std::list<T> const &other)
{
	_stack.assign(other.begin(), other.end());
	#ifdef DEBUG
	std::cout << "MutantStack list copy constructor called." << std::endl;
	#endif
}

template <typename T> MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &other)
{
	if (this != &other)
	{
		_stack = other._stack;
	}
	#ifdef DEBUG
	std::cout << "MutantStack assignment operator called." << std::endl;
	#endif
	return (*this);
}
template <typename T> MutantStack<T>::~MutantStack()
{
	#ifdef DEBUG
	std::cout << "MutantStack destructor called." << std::endl;
	#endif
}
template <typename T> bool MutantStack<T>::empty() const
{
	return (_stack.empty());
}
template <typename T> size_t MutantStack<T>::size() const
{
	return (_stack.size());
}
template <typename T> const T& MutantStack<T>::top() const
{
	return (_stack.back());
}
template <typename T> void MutantStack<T>::push (T const &value)
{
	_stack.push_back(value);
}

template <typename T> void MutantStack<T>::pop()
{
	_stack.pop_back();
}
template <typename T> void MutantStack<T>::swap(MutantStack<T> &other)
{
	_stack.swap(other._stack);
}
template <typename T> typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (_stack.begin());
}
template <typename T> typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (_stack.end());
}
