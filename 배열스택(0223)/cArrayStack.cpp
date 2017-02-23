#include "stdafx.h"
#include "cArrayStack.h"


cArrayStack::cArrayStack()
{
}


cArrayStack::~cArrayStack()
{
}

void cArrayStack::createStack(Stack** ppStack, int capacity)
{
	(*ppStack) = new Stack;

	(*ppStack)->node = new Node[capacity];

	(*ppStack)->capacity = capacity;
	(*ppStack)->top = 0;
}

void cArrayStack::destroyStack(Stack* pStack)
{
	if (pStack != null)
	{
		if (pStack->node != null)
		{
			delete pStack->node;
		}
		delete pStack;
	}
}

void cArrayStack::push(Stack* pStack, int data)
{
	int position = pStack->top;
	pStack->node[position].data = data;

	pStack->top++;
}

int cArrayStack::pop(Stack* pStack)
{
	return pStack->node[--pStack->top].data;
}

int cArrayStack::top(Stack* pStack)
{
	return pStack->node[pStack->top - 1].data;
}

int cArrayStack::getSize(Stack* pStack)
{
	return pStack->top;
}

int cArrayStack::isEmpty(Stack* pStack)
{
	return (pStack->top == 0);
}
