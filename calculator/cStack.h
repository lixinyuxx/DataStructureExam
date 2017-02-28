#pragma once

#define empty "empty"

class cStack
{
public:
	cStack();
	~cStack();

private:
	Node* createNode(string data);
	void delNode(Node* pDel);

public:
	void push(string data);

	string pop();
	
	string getTop();
	bool isEmpty();
	int getSize();

private:
	Node* phead;
	Node* pTop;
};

