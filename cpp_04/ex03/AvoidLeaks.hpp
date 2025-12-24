#pragma once
#include <iostream>

struct Node
{
	void* ptr;
	Node* next;
};

class AvoidLeaks
{
	private:
		Node* head;
	public:
		AvoidLeaks();
		~AvoidLeaks();
		void store(void* ptr);
		void freeAll();
};