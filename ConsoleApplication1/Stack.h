#pragma once

typedef char SElemType;

class Stack
{
public:
	Stack();
	~Stack();
	int InitStack(Stack &s);
	int GetTop(Stack s);
	int Push(Stack &s, SElemType e);
	int Pop(Stack &s, SElemType &e);
	int StackTravers(Stack &s);
	bool StackEmpty(Stack &s);
	void ClearStack(Stack &s);
	void DestroyStack(Stack &s);
	int EvaluateExpression();
	bool In(char y, char operator_1[]);
	char Precede(char c_1,char c_2);
	int Operate(char a_s, char theta, char b_s);
private:
	SElemType *base;
	SElemType *top;
	SElemType e;
	char operator_d[4] = { '+','-','*','/' };
	char a_s, b_s, y, theta;
	int stacksize;
};

