#include "stdafx.h"
#include "cStack.h"

cStack::cStack()
{
	this->phead = null;
	this->pTop = null;
}

cStack::~cStack()
{
	while (!this->isEmpty())
	{
		this->pop();
	}
}

Node* cStack::createNode(string data)
{
	Node* pNewNode = new Node;
	pNewNode->data = data;
	pNewNode->pNext = null;

	return pNewNode;
}

void cStack::push(string data)
{
	Node* pPushed = this->createNode(data);
	if (this->phead == null)
	{
		this->phead = pPushed;
		this->pTop = pPushed;
	}
	else
	{
		this->pTop->pNext = pPushed;
		this->pTop = pPushed;
	}
}

string cStack::pop()
{
	if (this->pTop == null) return empty;

	Node* pPop = this->pTop;
	string rt = pPop->data;

	//마지막 노드인 경우
	if (this->pTop == this->phead)
	{
		this->pTop = null;
		this->phead = null;

		this->delNode(pPop);

		return rt;
	}

	//
	Node* pCur = this->phead;
	while (pCur->pNext != this->pTop)
	{
		pCur = pCur->pNext;
	}
	this->pTop = pCur; //새로운 탑
	pCur->pNext = null;
	
	this->delNode(pPop);

	return rt;
}

void cStack::delNode(Node* pDel)
{
	if (pDel != null)
	{
		delete pDel;
		pDel = null;
	}	
}

string cStack::getTop()
{
	if (this->pTop == null) return empty;

	return this->pTop->data;
}

bool cStack::isEmpty()
{
	return (this->phead == null);
}

int cStack::getSize()
{
	int size = 0;
	Node* pCur = this->phead;
	while (pCur != null)
	{
		pCur = pCur->pNext;
		size++;
	}

	return size;
}