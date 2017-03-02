#include "stdafx.h"
#include "cArrayQueue.h"


cArrayQueue::cArrayQueue(int capacity)
{
	this->capacity = capacity;
	front = 0;
	rear = 0;
	this->nodeArr = null;
}


cArrayQueue::~cArrayQueue()
{
	if (this->nodeArr != null)
	{
		delete [] nodeArr;
	}
}

void cArrayQueue::enQueue(int data)
{
	if (this->nodeArr == null)
	{
		this->nodeArr = new Node[this->capacity + 1];
		/*int n = this->nodeArr[0].data;
		n = this->nodeArr[1].data;
		n = this->nodeArr[2].data;
		n = this->nodeArr[3].data;*/
	}
	
	if (this->isFull())
	{
		cout << "full q, cant enqueue" << endl;
		return;
	}

	if (rear == capacity)
	{
		rear = 0;
		nodeArr[rear].data = data;
	}
	else
	{
		nodeArr[rear++].data = data;
	}
}

int cArrayQueue::deQueue()
{
	if (this->isEmpty())
	{
		return -1;
	}

	int rt = nodeArr[front].data;

	if (front == capacity - 1)
	{
		front = 0;
	}
	else
	{
		front++;
	}

	return rt;
}

int cArrayQueue::getSize()
{
	return (abs)(rear - front);
}

bool cArrayQueue::isEmpty()
{
	return (front == rear);
}

bool cArrayQueue::isFull()
{
	if (front < rear)
	{
		return (rear - front == capacity);
	}
	else
	{
		return (rear + 1 == front);
	}
}