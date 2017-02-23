#pragma once
class cArrayStack
{
public:
	cArrayStack();
	~cArrayStack();

	void createStack(Stack** ppStack, int capacity);
	void destroyStack(Stack* pStack);
	void push(Stack* pStack, int data);
	int pop(Stack* pStack);
	int top(Stack* pStack);
	int getSize(Stack* pStack);
	int isEmpty(Stack* pStack);

	
	
};

