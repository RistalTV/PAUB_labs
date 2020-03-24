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
int func_scan(int CountElem);
//
//	Главная функция
//
int main()
{
	setlocale(0, "");
	srand((unsigned int)time(NULL));
	unsigned int const CountElement = rand() %80+12;
	unsigned int const MAX = 100;
	unsigned int I;
	unsigned int j = CountElement - 1;
	unsigned int editCountElement = CountElement - 1;
	unsigned int maxCountElem = editCountElement + 3;
	unsigned int MaxInputElem = editCountElement - 10;
	array <int, MAX> ArrMain = {};
	cout << "Количество элементов массива: " << CountElement << "\n" <<"Массив: ";
	//	Задаём значение элементам массива.Вывод массива
	{
	for (unsigned int i = 0; i < CountElement; i++)
	{
		ArrMain[i] = rand() % 200 - 100;
		cout << ArrMain[i] << " ";
	}
	cout << endl;
	}
	//  Переворачиваем массив
	{
		int tempElem;
		if (func_parity(CountElement)) 
		{
			unsigned int j = CountElement-1;
			unsigned int MiddleElem = func_MiddleElem(CountElement) + 1;
			for (unsigned int i = 0; i < MiddleElem; i++)
			{
				tempElem = ArrMain[j];
				ArrMain[j] = ArrMain[i];
				ArrMain[i] = tempElem;
				j--;
			}
		}
		else
		{
			unsigned int MiddleElem = func_MiddleElem(CountElement) + 1;
			unsigned int j = CountElement - 1;
			for (unsigned int i = 0; i < MiddleElem; i++)
			{
				tempElem = ArrMain[j];
				ArrMain[j] = ArrMain[i];
				ArrMain[i] = tempElem;
				j--;
			}
		}
	}
	//	Вывод перевёрнутого массива
	{
		cout << "Вывод перевёрнутого массива: ";
		for (unsigned int i = 0; i < CountElement; i++)
		{
			cout << ArrMain[i] << " ";
		}
		cout << endl;
	}
	//	Дествия после проверки на чётность(если нечётное то не записываем ср.число)
	{
		if (!func_parity(CountElement))
		{
			unsigned int MiddleElem = func_MiddleElem(CountElement);
			cout << "Удаляемый элемент:" << ArrMain[MiddleElem] << endl;
			for (unsigned int i = MiddleElem; i < CountElement; i++)
			{
				ArrMain[i] = ArrMain[i+1];
			}
		
			//	Вывод массива после проверки на чётность
			{
				cout << "Массив после проверки на чётность: ";
				for (unsigned int i = 0; i < editCountElement; i++)
				{
					cout << ArrMain[i] << " ";
				}
				cout << endl;
			}
		}
		else
		{
			//	Вывод массива после проверки на чётность
			{
				cout << "Массив после проверки на чётность: ";
				for (unsigned int i = 0; i < editCountElement+1; i++)
				{
					cout << ArrMain[i] << " ";
				}
				cout << endl;
			}
		}
	}
	//  Добавление в массив 3 лемента со значением M[I+10]
	{
		for (unsigned int i = editCountElement; i < maxCountElem; i++)
		{
			I = func_scan(CountElement);
			ArrMain[i] = ArrMain[I + 10] - 2;
		}
	}
	//	Вывод коннечного массива
	{
	cout << "                                   Результат\n" << "________________________________________________________________________________";
	cout << "\nМассив после проверки на чётность: ";
	for (unsigned int i = 0; i < maxCountElem; i++)
	{
		cout << ArrMain[i] << " ";
	}
	cout << endl << "________________________________________________________________________________" << endl;
	}
	//	Конец программы
	system("pause");
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
// 
//	Функция считывания I с проверкой ввода с клавиатуры
//
int func_scan(int CountElem)
{
	int I= -842234;
		while ((I<0) or (I> CountElem))
		{
			if (I == -842234)
				cout << "Введите значение I: ";
			else if ((I < 0) or (I > CountElem))
				cout << "Введите верное значение I: ";
			else if ((I > 0) or (I < CountElem))
				cout << "Введите значение I: ";
			cin >> I;
			if (cin.fail())
			{
				cout << "Введите верное значение I: ";
				cin.clear();
				cin.ignore(CountElem, '\n');
			}
			cin.ignore(CountElem, '\n');
		}

	return I;
}