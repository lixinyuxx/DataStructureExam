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

typedef struct tagNode
{
	int data;
	struct tagNode* pPrev;
	struct tagNode* pNext;
}Node;

#define null NULL

#include "cDLList.h";



// TODO: ���α׷��� �ʿ��� �߰� ����� ���⿡�� �����մϴ�.
