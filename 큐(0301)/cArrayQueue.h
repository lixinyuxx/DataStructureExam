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
	int capacity; //실제 용량보다 -1 (순환큐에서 텅빔과 꽉참을 구분하기 위해)
	int front;
	int rear;	  //마지막 인덱스+1
	Node* nodeArr;
};

