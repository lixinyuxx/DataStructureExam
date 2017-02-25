// 링크드리스트스택(0225).cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
		cout << "스택 empty" << endl;
	}
	else
	{
		cout << "스택 empty 아니다!" << endl;
	}

	return 0;
}

