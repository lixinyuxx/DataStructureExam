#include "stdafx.h"
#include "cDLList.h"


cDLList::cDLList()
{
}


cDLList::~cDLList()
{
}

Node* cDLList::createNode(int data)
{
	Node* newNode = new Node;
	newNode->data = data;
	newNode->pPrev = null;
	newNode->pNext = null;

	return newNode;
}

void cDLList::destroyNode(Node* node)
{
	if (node != null) delete node;
}

void cDLList::appendNode(Node** head, Node* newNode)
{
	if ((*head) == null)
	{
		*head = newNode;
	}
	else
	{
		Node* pTail = (*head);
		while (pTail->pNext != null)
		{
			pTail = pTail->pNext;
		}

		pTail->pNext = newNode;
		newNode->pPrev = pTail;
	}
}

void cDLList::insertAfter(Node* current, Node* newNode)
{
	newNode->pNext = current->pNext;
	newNode->pPrev = current;

	if (current->pNext != null)
	{
		current->pNext->pPrev = newNode;
	}

	current->pNext = newNode;
}

void cDLList::removeNode(Node** head, Node* removeNode)
{
	if ((*head) == removeNode)
	{
		*head = removeNode->pNext;
		if ((*head) != null)
		{
			(*head)->pPrev = null;
		}

		removeNode->pPrev = null;
		removeNode->pNext = null;
	}
	else
	{
		Node* temp = removeNode;
		if (temp != null)
		{
			removeNode->pNext->pPrev = temp->pPrev;
			removeNode->pPrev->pNext = temp->pNext;

			removeNode->pPrev = null;
			removeNode->pNext = null;
		}
	}

	//this->destroyNode(removeNode); //외부에서 삭제
}

Node* cDLList::getNodeAt(Node* head, int idx)
{
	Node* curr = head;

	while (curr != null && (--idx) >= 0)
	{
		curr = curr->pNext;
	}

	return curr;
}

int cDLList::getNodeCount(Node* head)
{
	int count = 0;

	while (head != null)
	{
		head = head->pNext;
		count++;
	}

	return count;
}