#pragma once
class cArrayQueue
{
public:
	cArrayQueue(int capacity);
	~cArrayQueue();

public:
	void enQueue(int data);
	int deQueue();
	int getSize();
	bool isEmpty();
	bool isFull();

private:
	int capacity; //���� �뷮���� -1 (��ȯť���� �ֺ��� ������ �����ϱ� ����)
	int front;
	int rear;	  //������ �ε���+1
	Node* nodeArr;
};

