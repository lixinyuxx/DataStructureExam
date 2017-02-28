#pragma once

typedef enum operandType
{
	LEFT = '(', RIGHT = ')',		//3
	PLUS = '+', MINUS = '-',		//2
	MULTIPLY = '*', DIVIED = '/',	//1
	SPACE = ' ',					//-1
	OPERAND
}Oper;

char numbers[] = {
	'0', '1', '2', '3', '4',
	'5', '6', '7', '8', '9'
};

class cCalculator
{
public:
	cCalculator();
	~cCalculator();

private:
	//���� -> ������ ġȯ
	string toPostFix(string midFix);

	//������ �켱����
	int getPriority(Oper oper, bool inStack);

	//�켱���� ��
	bool comparePriority(int oper1, int oper2);

	bool isNumber(string token);

	vector<string> getTokens(string input);

public:
	//������ ���
	int calc(string input);

private:
	cStack* pStack;
	vector<string> strVec;
};

