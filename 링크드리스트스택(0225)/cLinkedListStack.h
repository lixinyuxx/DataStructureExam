#pragma once
class cLinkedListStack
{
public:
	cLinkedListStack();
	~cLinkedListStack();

public:
	void createStack();
	void destroyStack();
	Node* createNode(char* data);
	void destroyNode(Node* node);
	void push(Node* node);
	Node* pop();
	Node* getTop();
	int getSize();
	int isEmpty();

public:
	Node* pList;	//head
	Node* pTop;		//tail				
};

