// ��ũ�帮��Ʈ����(0225).cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	cLinkedListStack stack;

	stack.push(stack.createNode("aaa"));
	stack.push(stack.createNode("bbb"));
	stack.push(stack.createNode("ccc"));
	stack.push(stack.createNode("ddd"));
	stack.push(stack.createNode("eee"));

	int len = stack.getSize();
	cout << "len : " << len << endl;
	cout << "top : " << stack.getTop()->data << endl;

	cout << endl;
	cout << "==============" << endl;
	cout << endl;

	//Node* popNode = null;
	while (!stack.isEmpty())
	{
		cout << "curSize : " << stack.getSize() << endl;
		cout << "top : " << stack.getTop()->data << endl;
		//popNode = ;
		cout << "pop : " << stack.pop()->data << endl;
	}

	if (stack.isEmpty())
	{
		cout << "���� empty" << endl;
	}
	else
	{
		cout << "���� empty �ƴϴ�!" << endl;
	}

	return 0;
}

