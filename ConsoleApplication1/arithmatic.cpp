#include<iostream>
#include<cstdlib>
#include<ctime>
#include"arithmatic.h"
#include"Stack.h"

using namespace std;

Arithmatic::Arithmatic()
{
	a = b = grade = 0;
}

Arithmatic::~Arithmatic()
{

}

//void Arithmatic::t_printf(int a, int b,int d)
//{
//	int count = 5;
//	srand(time(NULL));
//	for (int c = 0; c < COUNT; c++) {
//		count++;
//		//d_idx = rand() % 4;
//		//int chance_o = rand() % 2;
//		a = rand() % NUM;
//		b = rand() % NUM;
//		d = rand() % NUM;
//		switch (operator_d[d_idx = rand() % 4])
//		{
//		case '+':
//			Ans[c] = a - b;
//			cout << a << operator_d[d_idx] << b << operator_d[d_idx] << d << "=" << "               ";
//			break;
//		case '-':
//			Ans[c] = a - b;
//			cout << a << operator_d[d_idx] << b << operator_d[d_idx] << d << "=" << "               ";
//			break;
//		case '*':
//			Ans[c] = a * b;
//			cout << a << operator_d[d_idx] << b << operator_d[d_idx] << d << "=" << "               ";
//			break;
//		case '/':
//			if (a % b == 0 && b != 0 && a > b)
//			{
//				Ans[c] = a / b;
//				cout << a << operator_d[d_idx] << b << operator_d[d_idx] << d << "=" << "               ";
//				break;
//			}
//			else
//			{
//				c--;
//				if (count % 5 == 1)
//				{
//					count -= 5;
//				}
//				else
//				{
//					count--;
//				}
//				break;
//			}
//		default:
//			break;
//		}
//
//		if (count % 5 == 0)
//		{
//			cout << endl;
//		}
//	}
//	cout << endl;
//}

void Arithmatic::t_printf(int a, int b)
{
	//int count = 5;
	srand(time(NULL));
	for (int c = 0; c < COUNT; c++) {
		//count++;
		a = rand() % NUM;
		b = rand() % NUM;

		switch (operator_d[d_idx = rand() % 4])
		{
		case '+':
			Ans[c] = a + b;
			cout << a << operator_d[d_idx] << b << "=" << "               " << endl;
			break;
		case '-':
			Ans[c] = a - b;
			cout << a << operator_d[d_idx] << b << "=" << "               " << endl;
			break;
		case '*':
			Ans[c] = a * b;
			cout << a << operator_d[d_idx] << b << "=" << "               " << endl;
			break;
		case '/':
			if (a % b == 0 && b != 0)
			{
				Ans[c] = a / b;
				cout << a << operator_d[d_idx] << b << "=" << "               " << endl;
				break;
			}
			else
			{
				c--;
				/*if (count % 5 == 1)
				{
					count -= 5;
				}
				else
				{
					count--;
				}*/
				break;
			}
		default:
			break;
		}

		//if (count % 5 == 0) cout << endl;
	}
	cout << endl;
}

//void Arithmatic::printf_f()
//{
//	int c;
//	switch (operator_d[d_idx = rand() % 4])
//	{
//	case '+':
//		Ans[c] = a + b;
//		cout << a << operator_d[d_idx] << b << "=" << "               " << endl;
//		break;
//	case '-':
//		Ans[c] = a - b;
//		cout << a << operator_d[d_idx] << b << "=" << "               " << endl;
//		break;
//	case '*':
//		Ans[c] = a * b;
//		cout << a << operator_d[d_idx] << b << "=" << "               " << endl;
//		break;
//	case '/':
//		if (a % b == 0 && b != 0)
//		{
//			Ans[c] = a / b;
//			cout << a << operator_d[d_idx] << b << "=" << "               " << endl;
//			break;
//		}
//		else
//		{
//			c--;
//			break;
//		}
//	default:
//		break;
//	}
//}

void Arithmatic::printf_a()
{
	char chance;
	cout << "��ѡ���Ƿ�ʼ���⣺";
	cout << "��ʼ�����밴y���������밴n:";
	cin >> chance;
	switch (chance)
	{
	case 'y':
		cout << "���ڿ�ʼ����,������ÿ����Ĵ𰸣�" << endl;
		for (int c = 0; c < COUNT; c++)
		{
			cout << "��" << c + 1 << "��: ";
			cin >> Ans_a;
			if (Ans[c] == Ans_a)
			{
				cout << "����ˣ���5�֣�" << endl;
				grade += 5;
			}
			else
			{
				cout << "�����" << endl;
			}
		}
		cout << "�����յĳɼ�Ϊ��" << grade << endl;
		break;
	case 'n':
		cout << "�������⣡" << endl;
		break;
	}
}

//void Arithmatic::printf_s()
//{
//	int cha;
//	srand(time(NULL));
//	for (int c = 0; c < COUNT; c++) {
//		int d_idx = rand() % 4;
//		int d_idx_o = rand() % 4;
//		cha = rand() % 3;
//		a = rand() % NUM;
//		b = rand() % NUM;
//		d = rand() % NUM;
//		if ((a != 0 && b != 0 && d != 0) && (a % b == 0 || b % d == 0))
//		{
//			switch (cha) {
//			case 1:
//				Ans[c] = s.EvaluateExpression();
//				cout << a << operator_d[d_idx] << b << "=" << "               " << endl;
//				break;
//			case 2:
//				if (d_idx != d_idx_o) {
//					Ans[c] = s.EvaluateExpression();
//					cout << a << operator_d[d_idx] << b << operator_d[d_idx_o] << d << "=" << "               " << endl;
//					break;
//				}
//				else {
//					c--;
//					break;
//				}
//			default:
//				c--;
//				break;
//			}
//		}
//		else
//		{
//			c--;
//		}
//	}
//}
