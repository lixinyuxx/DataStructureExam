#include "stdafx.h"
#include "cCalculator.h"


cCalculator::cCalculator()
{
	pStack = null;
	pStack = new cStack;
}


cCalculator::~cCalculator()
{
	if (pStack != null)
	{
		delete pStack;
		pStack = null;
	}
}

//���� -> ������ ġȯ
string cCalculator::toPostFix(string midFix)
{
	for (int i = 0; i < midFix.length(); i++)
	{
		if (Oper::SPACE == midFix[i])
		{

		}
	}

	return empty;
}

//vector<string> cCalculator::getTokens(string input)
//{
//	strVec.clear();
//	string token = "";
//	for (int i = 0; i < input.length(); i++)
//	{
//		token += input[i];
//		if (input[i] == Oper::SPACE)
//		{
//			token.erase(' ');
//			strVec.push_back(token);
//		}
//	}
//	
//	
//}

//������ �켱����
int cCalculator::getPriority(Oper oper, bool inStack)
{
	int rt = 0;
	switch (oper)
	{
	case Oper::LEFT:
		if (inStack)
		{
			rt = 3;
		}
		else
		{
			rt = 0;
		}
		break;
	case Oper::RIGHT:
		rt = -1;
		break;
	case Oper::PLUS:
	case Oper::MINUS:
		rt = 2;
		break;
	case Oper::MULTIPLY:
	case Oper::DIVIED:
		rt = 1;
		break;
	default:
		rt = -2;
		break;
	}

	return rt;
}

//�켱���� ��
bool cCalculator::comparePriority(int oper1, int oper2)
{
	return (oper1 > oper2);
}

bool cCalculator::isNumber(string token)
{
	int len = sizeof(numbers) / sizeof(numbers[0]);
	for (int i = 0; i < len; i++)
	{
		if (token[0] == numbers[i])
		{
			return true;
		}
	}

	return false;
}

int cCalculator::calc(string input)
{
	return 0;
}