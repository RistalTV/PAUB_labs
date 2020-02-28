// Lab_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <deque>
#include <ctime>
#include <cstdlib>
#include <clocale>
#include <cstdio>

using namespace std;


int main()
{
	setlocale(0, "");
	srand((unsigned int)time(NULL));
	unsigned int const CountElem = rand() % 8 + 12;
	cout << "Количество элементов вектора: " << CountElem << "\n" << "Вектор: ";
	deque<int> dek(CountElem);
//
//	Задаём значение элементам вектора.Вывод вектора
//
	for (unsigned int i = 0; i < CountElem; i++)
	{
		dek[i] = rand() % 100 - 50;
		cout << dek[i] << " ";
	}
	cout << endl;
//
//	Сортировка пузырьковым методом
//
	int tempElem, pass=1,CE=CountElem-1;
	for (unsigned int j = 0; j < CountElem; j++)
	{	
		printf("Вектор после %-4d прохода : ", pass++);
		for (unsigned int i = 0; i < CE; i++)
		{
			if (dek[i] > dek[i + 1])
			{
				tempElem   = dek[i];
				dek[i]	   = dek[i + 1];
				dek[i + 1] = tempElem;
			}
			cout << dek[i] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
