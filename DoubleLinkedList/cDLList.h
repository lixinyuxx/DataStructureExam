#pragma once
class cDLList
{
public:
	cDLList();
	~cDLList();

	Node* createNode(int data);
	void destroyNode(Node* node);
	void appendNode(Node** head, Node* newNode);
	void insertAfter(Node* current, Node* newNode);
	void removeNode(Node** head, Node* removeNode);
	Node* getNodeAt(Node* head, int idx);
	int getNodeCount(Node* head);
};

