#include<iostream>
#include<stdio.h>
#include<stdint.h>
#include<locale>
#include<time.h>
#include <stdarg.h>

#include "Header.h"

using namespace std;

void main()
{
	int n;
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	do
	{
		cout << "введите номер задания:";
		cin >> n;

		switch (n) {
			//аргументы функции по умолчанию
		case 1: {
			t2(20);
			cout << endl;

		}break;
			//процедуры с числовыми параметрами
		case 2: {
			int k, d;
			cout << "k: ";
			cin >> k;
			for (int i = 0; i < 2; i++)
			{
				while (1)
				{
					cout << "d: ";
					cin >> d;
					if (d >= 0 && d <= 9)
					{
						addRD(d, k);
						break;
					}
					else
					{
						cout << "!!!" << endl;
					}
				}
				cout << "k= " << k << endl;
			}
		}break;

			//отсутствие аргументов и неопределенные аргументы
		case 3: {
			double sum = SumNumber(3, 1, 1, 1, 1, 1, 1, 1, 1, 1); // Первая цифра, указывает сколько взять значений из следующего списка.
			cout << sum << endl;
			cout << endl;

		}break;

		case 4: {
				up_and_down (3);
		}break;

			//factorial
		case 5: {
			int num;
			while (scanf("%d", &num) == 1)
			{
				if (num < 0)
				{
					cout << "Please don't enter - number" << endl;
				}
				else if (num > 12)
				{
					cout << "The input type must be less 13" << endl;
				}
				else
				{
					long result = fact(num);
					cout << "Num = " << num << "result = " << result << endl;

					long resultR = rfact(num);
					cout << "Num = " << num << "result = " << resultR << endl;
				}
			}
		}break;
//11.Написать рекурсивную функцию:
	//a.вычисления суммы цифр натурального числа;
	//b.вычисления количества цифр натурального числа.

		case 6: {
			char ch[5];
			int s = 0;
			rand (ch, 5);
			s = rsum(ch, 5, &s);
		}break;
		}
	} while (n > 0);
}


