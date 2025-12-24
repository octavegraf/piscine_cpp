#include "AvoidLeaks.hpp"
#include "AMateria.hpp"

AvoidLeaks::AvoidLeaks() : head(NULL)
{
}

AvoidLeaks::~AvoidLeaks()
{
	freeAll();
}

void AvoidLeaks::store(void* ptr)
{
	if (ptr == NULL)
		return;
	
	Node* newNode = new Node();
	newNode->ptr = ptr;
	newNode->next = head;
	head = newNode;
}

void AvoidLeaks::freeAll()
{
	Node* current = head;
	while (current)
	{
		Node* tmp = current;
		current = current->next;
		delete (AMateria*)(tmp->ptr);
		delete tmp;
	}
	head = NULL;
}
