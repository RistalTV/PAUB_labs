 // Lab_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <array>
#include <ctime>
#include <cstdlib>
#include <clocale>

using namespace std;

bool func_parity(int CountElem);
int func_MiddleElem(int CountElement);

int main()
{
	setlocale(0, "");
	srand((unsigned int)time(NULL));
	unsigned int const CountElement = rand() % 80+12;
	unsigned int const MAX = 100;
	array <int, MAX> ArrMain = {};
	array <int, MAX> ArrCopy = {};
	cout << "Количество элементов массива: " << CountElement << "\n" <<"Массив: ";
//
//	Задаём значение элементам массива.Вывод массива
//
	for (unsigned int i = 0; i < CountElement; i++)
	{
		ArrMain[i] = rand() % 200-100;
		cout << ArrMain[i] << " ";
	}
	cout << endl;
//
//  Переворачиваем массив
//
	unsigned int j = CountElement - 1;
	for (unsigned int i = 0; i < CountElement; i++)
	{
		//cout << "i = " << i << " - ArrCopy[i] = " << ArrCopy[i] << "\n" << "j = " << j << " - ArrMain[j] = " << ArrMain[j] << "\n";
		ArrCopy[i] = ArrMain[j];
		ArrMain[j] = 0;
		//cout << "\n\ni = " << i << " - ArrCopy[i] = " << ArrCopy[i] << "\n=============================================================\n\n";
		j--;
	}
//
//	Вывод перевёрнутого массива
//
	cout << "Вывод перевёрнутого массива: ";
	for (unsigned int i = 0; i < CountElement; i++)
	{
		cout << ArrCopy[i]<< " ";
	}
	cout << endl;
//
//	Дествия после проверки на чётность(если нечётное то не записываем ср.число)
//
	if (func_parity(CountElement))
	{
		for (unsigned int i = 0; i < CountElement; i++)
		{
			ArrMain[i] = ArrCopy[i];
		}
	}
	else 
	{
		unsigned int MiddleElem = func_MiddleElem(CountElement);
		unsigned int j = MiddleElem + 1;
		for (unsigned int i = 0; i < MiddleElem; i++)
		{
			ArrMain[i] = ArrCopy[i];
		}
		for (unsigned int i = MiddleElem; i < CountElement; i++)
		{
			ArrMain[i] = ArrCopy[j];
			j++;
		}
		cout << "Удаляемый элемент:" << ArrCopy[MiddleElem] << endl;
	}
//
//	Вывод массива после проверки на чётность
//
	unsigned int editCountElement= CountElement-1;
	cout << "Массив после проверки на чётность: ";
	for (unsigned int i = 0; i < editCountElement; i++)
	{
		cout << ArrMain[i] << " ";
	}
	cout << endl;
//
//  Добавление в массив 3 лемента со значением M[I+10]
//

	unsigned int I;
	unsigned int maxCountElem = editCountElement + 3;
	unsigned int MaxInputElem = editCountElement - 10;
	for (unsigned int i = editCountElement; i < maxCountElem; i++)
	{	
		cout << "Введите значение I: ";
		cin >> I;
		ArrMain[i] = ArrMain[I + 10] - 2;
	}
//
//	Вывод коннечного массив
//
	cout << "                                   Результат\n" << "________________________________________________________________________________";
	cout << "\nМассив после проверки на чётность: ";
	for (unsigned int i = 0; i < maxCountElem; i++)
	{
		cout << ArrMain[i] << " ";
	}
	cout <<endl << "________________________________________________________________________________" << endl;

return 0;
}
//
//	Проверка на чётность
//
bool func_parity(int CountElem) 
{
	if (CountElem % 2 == 0)
		return true;
	else
		return false;
}
//
//	Нахождение среднего элемента
//
int func_MiddleElem(int CountElement) 
{
	unsigned int MiddleElem = (CountElement / 2) ;
	return MiddleElem;
}