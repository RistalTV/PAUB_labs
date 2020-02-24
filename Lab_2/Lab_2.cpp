// Lab_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <clocale>

using namespace std;


int main()
{
	setlocale(0, "");
	srand((unsigned int)time(NULL));
	unsigned int const CountElem = rand() % 80 + 12;
	cout << "Количество элементов вектора: " << CountElem << "\n" << "Вектор: ";
	vector<int> vec1(CountElem);
//
//	Задаём значение элементам вектора.Вывод вектора
//
	for (unsigned int i = 0; i < CountElem; i++)
	{
		vec1[i] = rand() % 200 - 100;
		cout << vec1[i] << " ";
	}
	cout << endl;
//
//	Сортировка пузырьковым методом
//
	for (unsigned int i = 0; i < CountElem; i++)
	{

	}
	return 0;
}
