#include "stdafx.h"
#include "cLinkedListStack.h"


cLinkedListStack::cLinkedListStack()
{
	pList = null;
	pTop = null;		
}


cLinkedListStack::~cLinkedListStack()
{
	while (this->pTop != null)
	{
		Node* popped = this->pop();
		this->destroyNode(popped);
	}
	pList = null;
	pTop = null;
}



Node* cLinkedListStack::createNode(char* data)
{
	if (data == null) return null;

	Node* node = new Node;
	node->data = new char[strlen(data) + 1];
	strcpy(node->data, data);
	node->pNextNode = null;

	return node;
}
void cLinkedListStack::destroyNode(Node* node)
{
	if (node == null) return;

	delete [] node->data;
	delete node;
}
void cLinkedListStack::push(Node* node)
{
	if (this->pList == null)
	{
		this->pList = node;
	}
	else
	{
		Node* last = this->pList;
		while (last->pNextNode != null)
		{
			last = last->pNextNode;
		}
		last->pNextNode = node;
	}

	this->pTop = node;
}
Node* cLinkedListStack::pop()
{
	if (this->pList == null) return null;
 
	Node* popNode = this->pTop;

	if (this->pList == this->pTop)
	{
		this->pList = null;
		this->pTop = null;
	}
	else
	{
		Node* last = this->pList;
		while (last->pNextNode != this->pTop)
		{
			last = last->pNextNode;
		}
		this->pTop = last;
		last->pNextNode = null;
	}

	return popNode;
}
Node* cLinkedListStack::getTop()
{
	return this->pTop;
}
int cLinkedListStack::getSize()
{
	int count = 0;
	Node* lastNode = pList;
	while (lastNode != null)
	{
		lastNode = lastNode->pNextNode;
		count++;
	}

	return count;
}
int cLinkedListStack::isEmpty()
{
	return (this->pList == null);
}



