// stdafx.h : ���� ��������� ���� ��������� �ʴ�
// ǥ�� �ý��� ���� ���� �� ������Ʈ ���� ���� ������
// ��� �ִ� ���� �����Դϴ�.
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <iostream>

using namespace std;




#define null NULL

typedef struct tagNode
{
	int data;
}Node;

typedef struct tagArrayStack
{
	int capacity;
	int top;
	Node* node;
}Stack;

#include "cArrayStack.h"



// TODO: ���α׷��� �ʿ��� �߰� ����� ���⿡�� �����մϴ�.
