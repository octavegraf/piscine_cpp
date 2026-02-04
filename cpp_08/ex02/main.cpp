#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	std::cout << "Is stack empty? " << (mstack.empty() ? "Yes." : "No.") << std::endl;
	mstack.push(5);
	std::cout << "Is stack empty? " << (mstack.empty() ? "Yes." : "No.") << std::endl;
	mstack.push(17);
	std::cout << mstack.top() << " is on top." << std::endl;
	mstack.pop();
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(-142);
	mstack.swap(mstack);
	std::cout << "Stack size: " << mstack.size() << std::endl;
	std::cout << mstack.top() << " is on top." << std::endl;
	std::cout << "Printing all elements in the stack:" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
	std::stack<int> s(mstack);
}

// int main()
// {
// 	std::list<int> mstack;
// 	std::cout << "Is stack empty? " << (mstack.empty() ? "Yes." : "No.") << std::endl;
// 	mstack.push_back(5);
// 	std::cout << "Is stack empty? " << (mstack.empty() ? "Yes." : "No.") << std::endl;
// 	mstack.push_back(17);
// 	std::cout << mstack.back() << " is on top." << std::endl;
// 	mstack.pop_back();
// 	mstack.push_back(3);
// 	mstack.push_back(5);
// 	mstack.push_back(737);
// 	mstack.push_back(-142);
// 	mstack.swap(mstack);
// 	std::cout << "Stack size: " << mstack.size() << std::endl;
// 	std::cout << mstack.back() << " is on top." << std::endl;
// 	std::cout << "Printing all elements in the stack:" << std::endl;
// 	std::list<int>::iterator it = mstack.begin();
// 	std::list<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 		std::cout << *it << " ";
// 		++it;
// 	}
// 	std::cout << std::endl;
// 	std::stack<int, std::list<int> > s(mstack);
// }
