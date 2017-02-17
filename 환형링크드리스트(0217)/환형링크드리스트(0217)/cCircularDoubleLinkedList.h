#pragma once
class cCircularDoubleLinkedList
{
public:
	cCircularDoubleLinkedList();
	~cCircularDoubleLinkedList();

	Node* createNode(int data);
	void destroyNode(Node* node);
	void appendNode(Node** head, Node* newNode);
	void insertAfter(Node* curNode, Node* newNode);
	void removeNode(Node** head, Node* remove);
	Node* getNodeAt(Node* head, int idx);
	int getCount(Node* head);
};

