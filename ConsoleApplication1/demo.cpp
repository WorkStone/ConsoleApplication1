#include<iostream>
#include<cstdlib>
#include<ctime>
#include"arithmatic.h"
#include"Stack.h"

using namespace std;

int main()
{
	Arithmatic arith;
	//Stack st;
	int a, b, d;
	a = b = d = 0;
	/*st.Push(st, 1);
	st.Push(st, 2);
	st.Push(st, 3);
	st.StackTravers(st);*/
	//cout << s.GetTop(s) << endl;
	/*cout << s.Operate(6, '*', 8) << endl;
	cout << s.Operate(6, '-', 8) << endl;
	cout << s.Operate(6, '+', 8) << endl;
	cout << s.Operate(6, '/', 3) << endl;

	cout << s.Precede('*', '-') << endl;
	cout << s.Precede('+', '-') << endl;
	cout << s.Precede('+', '/') << endl;*/
	//cout << s.EvaluateExpression() << endl;
	//arith.printf_s();
	arith.t_printf(a, b);
	arith.printf_a();
	system("pause");
	return 0;
}