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
	char* data;
	struct tagNode* pNextNode;
}Node;

#include "cLinkedListStack.h"

// TODO: ���α׷��� �ʿ��� �߰� ����� ���⿡�� �����մϴ�.
