// 배열스택(0223).cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Stack* pStack = null;

	cArrayStack obj;

	obj.createStack(&pStack, 10);

	obj.push(pStack, 3);
	cout << "push : " << obj.top(pStack) << endl;
	obj.push(pStack, 37);
	cout << "push : " << obj.top(pStack) << endl;
	obj.push(pStack, 11);
	cout << "push : " << obj.top(pStack) << endl;
	obj.push(pStack, 12);
	cout << "push : " << obj.top(pStack) << endl;
	
	int size = obj.getSize(pStack);
	cout << "capacity : " << pStack->capacity << ", size : " << size << ", top : " << pStack->top << endl;

	
	for (int i = 0; i < size; i++)
	{
		if (obj.isEmpty(pStack))
		{
			break;
		}

		cout << "pop : " << obj.pop(pStack) << endl; 

		if (!obj.isEmpty(pStack))
		{
			cout << "curTop : " << obj.top(pStack) << endl;
		}
		else
		{
			cout << "stack empty" << endl;
		}
	}

	//
	obj.destroyStack(pStack);


	return 0;
}

