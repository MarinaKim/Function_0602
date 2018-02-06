#include<iostream>
#include<stdio.h>
#include<stdint.h>
#include<locale>
#include<time.h>
#include <stdarg.h>

using namespace std;

int t2(int a, char b)
{
	for (int i = 0; i <= a; i++)
	{
		cout << b;
		return 0;
	}
}

double SumNumber(int num, ...)
{
	double sum = 0.0;

	va_list arg; //���������� ������ ������� ����� ����������, va_list - ��� ���������������� ���
				 //������������� ��������� arg
	va_start(arg, num);

	//������������ ���� ����
	double t;
	for (; num; num--) //�� ��� ��� ���� true (1), ��� ������ =0 (false)
	{
		t = va_arg(arg, double); //���������� ��������
		sum += t;
	}

	//����������
	va_end(arg);

	return sum;
}

void addRD(int d, int &k) //������� ����� � ����� �������� � ����������
{
	k = 10 * k + d;
}

//case 4: ��������
int up_and_down(int n)
{
	cout << "Level: " << n << endl;
	if (n < 4)
	{
		up_and_down(n + 1);
		cout << " Level: " << n << endl;
	}
	return 0;
}

//case 5: factorial
long fact(int n)
{
	long ans;
	for (ans = 1; n > 1; n--)
	{
		ans *= n;
	}
	return ans;
}

long rfact(int n)
{
	long ans;
	if (n > 0)
		ans = n*rfact(n - 1);
	else
		ans = 1;
	return ans;
}


//11.	�������� ����������� �������:
//a.���������� ����� ���� ������������ �����;
//���������� ���������� ���� ������������ �����.
int sum(char*ch,int r)
{
	int s = 0;
	for (int i = 0; i < r; i++)
	{
		s += (int) *ch;
		ch++;
	}
	return s;
}

int rsum(char *ch, int r,int *s)
{
	if (r >= 0)
	{
		r--;
		s += rsum(ch + r, r, s);
	}
	else
		r = *ch + r;
	return r;
}

//random
void rand(char *m, int r)
{
	srand(time(NULL));
	for (int i = 0; i < r; i++)
	{
		*m = (1 + rand() % 9) + '0'; //��������� ����� � char
		m++;
	}
}
