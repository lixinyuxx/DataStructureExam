// ť(0301).cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	cArrayQueue q(10);

	cout << q.deQueue() << endl;

	cout << "empty : " << q.isEmpty() << endl;
	cout << "size : " << q.getSize() << endl;

	for (int i = 0; i < 12; i++)
	{
		cout << "equeu : " << i << endl;
		q.enQueue(i);
		cout << "size : " << q.getSize() << endl;
	}

	cout << endl;
	cout << "full : " << q.isFull() << endl;

	for (int i = 0; i < 4; i++)
	{
		cout << q.deQueue() << endl;
	}

	for (int i = 0; i < 12; i++)
	{
		cout << "size : " << q.getSize() << endl;
		q.enQueue(i + 100);
	}
	
	for (int i = 0; i < 4; i++)
	{
		cout << q.deQueue() << endl;
	}

	//delete q;

	return 0;
}

