// DoubleLinkedList.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i = 0;
	int count = 0;
	Node* nodeList = null;
	Node* newNode = null;
	Node* currNode = null;

	cDLList list;

	for (i = 0; i < 5; i++)
	{
		newNode = list.createNode(i);
		list.appendNode(&nodeList, newNode);
	}

	count = list.getNodeCount(nodeList);
	for (i = 0; i < count; i++)
	{
		cout << list.getNodeAt(nodeList, i)->data << endl;
	}

	currNode = list.getNodeAt(nodeList, 2);
	newNode = list.createNode(3030);
	list.insertAfter(currNode, newNode);

	count = list.getNodeCount(nodeList);
	for (i = 0; i < count; i++)
	{
		cout << list.getNodeAt(nodeList, i)->data << endl;
	}

	count = list.getNodeCount(nodeList);
	for (i = 0; i < count; i++)
	{
		currNode = list.getNodeAt(nodeList, i);

		list.removeNode(&nodeList, currNode);
		list.destroyNode(currNode);
	}

	return 0;
}

