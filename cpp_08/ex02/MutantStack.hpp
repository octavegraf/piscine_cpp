#pragma once

#include <vector>
#include <iostream>
#include <stack>
#include <iterator>
#include <algorithm>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
		std::vector<T> _stack;
	public:
		typedef typename std::vector<T>::iterator iterator;
		MutantStack();
		MutantStack(MutantStack<T> const &other);
		MutantStack(std::list<T> const &other);
		MutantStack<T> &operator=(MutantStack<T> const &other);
		~MutantStack();
		bool empty() const;
		size_t size() const;
		const T& top() const;
		void push (T const &value);
		void pop();
		void swap(MutantStack<T> &other);
		iterator begin();
		iterator end();
};

#include "MutantStack.tpp"
