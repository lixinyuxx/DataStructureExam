#include "stdafx.h"
#include "cCircularDoubleLinkedList.h"

cCircularDoubleLinkedList::cCircularDoubleLinkedList()
{
}


cCircularDoubleLinkedList::~cCircularDoubleLinkedList()
{
}

Node* cCircularDoubleLinkedList::createNode(int data)
{
	Node* node = new Node;

	node->data = data;
	node->pPrev = null;
	node->pNext = null;

	return node;
}

void cCircularDoubleLinkedList::destroyNode(Node* node)
{
	if (node != null) delete node;
}

void cCircularDoubleLinkedList::appendNode(Node** head, Node* newNode)
{
	if ((*head) == null)
	{
		(*head) = newNode;
		(*head)->pPrev = (*head);
		(*head)->pNext = (*head);
	}
	else
	{
		Node* tail = (*head)->pPrev;

		tail->pNext->pPrev = newNode;
		tail->pNext = newNode;

		newNode->pNext = (*head);
		newNode->pPrev = tail;
	}
}

void cCircularDoubleLinkedList::insertAfter(Node* curNode, Node* newNode)
{
	newNode->pNext = curNode->pNext;
	newNode->pPrev = curNode->pPrev;

	curNode->pNext->pPrev = newNode;
	curNode->pNext = newNode;
	
}

void cCircularDoubleLinkedList::removeNode(Node** head, Node* remove)
{
	if ((*head) == remove)
	{
		(*head)->pPrev->pNext = (*head)->pNext;
		(*head)->pNext->pPrev = (*head)->pPrev;

		(*head) = remove->pNext;

		(*head)->pNext = null;
		(*head)->pPrev = null;
	}
	else
	{
		Node* tempNode = remove;

		remove->pNext->pPrev = remove->pPrev;
		remove->pPrev->pNext = remove->pNext;

		remove->pNext = null;
		remove->pPrev = null;
	}
}

Node* cCircularDoubleLinkedList::getNodeAt(Node* head, int idx)
{
	while (head != null && (--idx) >= 0)
	{
		head = head->pNext;
	}

	return head;
}

int cCircularDoubleLinkedList::getCount(Node* head)
{
	Node* curNode = head;
	int count = 0;

	while (curNode != null)
	{
		count++;

		if (curNode->pNext == head) break;

		curNode = curNode->pNext;
	}

	return count;
}
