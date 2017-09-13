#pragma once
#include"Stack.h"
#define COUNT 10
#define NUM 20

class Arithmatic
{
private:
	double Ans[COUNT];
	char operator_d[4] = { '+','-','*','/' };
	int a, b, d, e_a, d_idx ;
	int grade,Ans_a;
	Stack s;
public:
	Arithmatic();
	~Arithmatic();
	void t_printf(int a,int b);
	//void printf_f();

	//void t_printf(int a,int b,int d);

	//void printf_s();

	void printf_a();

};