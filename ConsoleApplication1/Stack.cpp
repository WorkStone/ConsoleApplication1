#include "Stack.h"
#include"stdlib.h"
#include<iostream>
#include"stdio.h"

using namespace std;

#define STACK_INIT_SIZE 100
#define STACKINCREMENT 10
#define OVERFLOW -1
#define OK 1





Stack::Stack()
{
}


Stack::~Stack()
{
}



int Stack::InitStack(Stack &s) {
	s.base = (SElemType *)malloc(sizeof(SElemType)*STACK_INIT_SIZE);
	if (!s.base)exit(OVERFLOW);
	s.top = s.base;
	s.stacksize = STACK_INIT_SIZE;
	return OK;
}

int Stack::GetTop(Stack s)
{
	if (s.top == s.base) return -1;
	e = *(s.top - 1);
	return e;
}

int Stack::Push(Stack &s, SElemType e) {
	if (s.top - s.base >= s.stacksize)//zhanman
	{
		s.base = (SElemType *)realloc(s.base, (s.stacksize + STACKINCREMENT) * sizeof(SElemType));
		
		if (!s.base) exit(OVERFLOW);
		s.top = s.base + s.stacksize;
		s.stacksize += STACKINCREMENT;
	}
	*s.top++ = e;
	return OK;
}

int Stack::Pop(Stack &s, SElemType &e)
{
	if (s.top == s.base) return -1;
	e = *--s.top;
	return OK;
}

int Stack::StackTravers(Stack &s)
{
	if (s.top == s.base) return -1;
	while (s.top != s.base)
	{
		cout << "栈中元素（栈顶到栈底）为：" << *--s.top << endl;
	}
	return OK;
}

bool Stack::StackEmpty(Stack &s) {
	if (s.top == s.base) return true;
	return false;
}

void Stack::ClearStack(Stack &s) {
	if (s.top != s.base)
		s.top = s.base;
}

void Stack::DestroyStack(Stack &s)
{
	free(s.base);
}

int Stack::EvaluateExpression()
{
	Stack OPTR, OPND;
	InitStack(OPTR); Push(OPTR, '#');
	InitStack(OPND); 
	y = getchar();
	while (y != '#' || GetTop(OPTR) != '#' || y != '\n')
	{
		if (!In(y,operator_d)) {
			Push(OPND, y);
			y = getchar();
		}
		else
		{
			switch (Precede(GetTop(OPTR), y)) {
			case '<':
				Push(OPTR, y); y = getchar();
				break;
			case '=':
				Pop(OPTR, e); y = getchar();
				break;
			case '>':
				Pop(OPTR, theta);
				Pop(OPND, b_s); Pop(OPND, a_s);
				Push(OPND, Operate(a_s, theta, b_s));
				break;
			}
		}
	}
	return GetTop(OPND);
}

bool Stack::In(char y_1, char operator_1[])
{
	operator_1 = operator_d;
	if (y_1 == '+' || y_1 == '-' || y_1 == '*' || y_1 == '/')
		return true;
	return false;
}


char Stack::Precede(char c_1, char c_2)
{
	switch(c_1){
	case '*':
		if (c_2 == '+' || c_2 == '-')
			return '>';
		else if (c_2 == '*' || c_2 == '/')
			return '=';
		break;
	case '/':
		if (c_2 == '+' || c_2 == '-')
			return '>';
		else if (c_2 == '*' || c_2 == '/')
			return '=';
		break;
	case '+':
		if (c_2 == '+' || c_2 == '-')
			return '=';
		else if (c_2 == '*' || c_2 == '/')
			return '<';
		break;
	case '-':
		if (c_2 == '+' || c_2 == '-')
			return '=';
		else if (c_2 == '*' || c_2 == '/')
			return '<';
		break;
	default:
		return false;
		break;
	}
}

int Stack::Operate(char a_s, char theta, char b_s)
{
	Stack OPTR;
	Pop(OPTR, theta);
	switch (theta)
	{
	case '+':
		return a_s + b_s;
		break;
	case '-':
		return a_s - b_s;
		break;
	case '*':
		return a_s * b_s;
		break;
	case '/':
		return a_s / b_s;
		break;
	default:
		return false;
		break;
	}
}

