// ȯ����ũ�帮��Ʈ(0217).cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	cout << "a;lkdfja;lfkdj" << endl;
	cCircularDoubleLinkedList list;

	int i = 0;
	int count = 0;
	Node* head = null;
	Node* newNode = null;
	Node* curNode = null;

	for (i = 0; i < 5; i++)
	{
		newNode = list.createNode(i);
		list.appendNode(&head, newNode);
	}

	count = list.getCount(head);
	for (i = 0; i < count; i++)
	{
		cout << list.getNodeAt(head, i)->data << endl;
	}

	curNode = list.getNodeAt(head, 3);
	list.insertAfter(curNode, list.createNode(3000));

	count = list.getCount(head);
	for (i = 0; i < count * 2; i++)
	{
		if (i == 0)
		{
			curNode = head;
		}
		else
		{
			curNode = curNode->pNext;
		}

		cout << curNode->data << endl;
	}

	//
	count = list.getCount(head);
	for (i = 0; i < count; i++)
	{
		curNode = list.getNodeAt(head, i);

		if (curNode != null)
		{
			list.removeNode(&head, curNode);
			list.destroyNode(curNode);
		}
	}

	return 0;
}

