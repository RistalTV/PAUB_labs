// Lab_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <deque>
#include <ctime>
#include <cstdlib>
#include <clocale>

using namespace std;


int main()
{
	setlocale(0, "");
	srand((unsigned int)time(NULL));
	unsigned int const CountElem = rand() % 10;// 10 + 3;//80 + 12;
	unsigned int const CountSimpleNum = 100;
	unsigned int const CountSimpleElemDeka = 50;
	deque<int> dek1(CountElem);
	//	Задаём значение элементам дека.Вывод дека
	{
		cout << "Количество элементов дека: " << CountElem << "\nДек: ";
		for (unsigned int i = 0; i < CountElem; i++)
		{
			dek1[i] = rand() % 100;
			cout << dek1[i] << " ";
		}
	}
	//	Сортировка пузырьковым методом.
	{
		//	По возрастанию
		{
			cout << "\n\nСортировка пузырьковым методом:\n\n\n  - По возрастанию\n";
			unsigned int counts = 1;
			for (unsigned int i = 0; i < CountElem; i++)
			{
				cout << "     Дек после " << counts << "-го подхода: ";
				for (unsigned int j = 0; j < CountElem - 1; j++)
				{
					if (dek1[j] > dek1[j + 1])
					{
						int tempElem = dek1[j + 1];
						dek1[j + 1] = dek1[j];
						dek1[j] = tempElem;
					}
				}
				for (int temp : dek1)
				{
					cout << temp << " ";
				}
				cout << endl;
				counts += 1;
			}
		}
		//	По убыванию
		{
			cout << "\n\n  - По убыванию\n";
			unsigned int counts = 1;
			for (unsigned int i = 0; i < CountElem; i++)
			{
				cout << "     Дек после " << counts << "-го подхода: ";
				for (unsigned int j = 0; j < CountElem - 1; j++)
				{
					if (dek1[j] < dek1[j + 1])
					{
						int tempElem = dek1[j + 1];
						dek1[j + 1] = dek1[j];
						dek1[j] = tempElem;
					}
				}
				for (int temp : dek1)
				{
					cout << temp << " ";
				}
				cout << endl;
				counts += 1;
			}
		}
	}
	//	Решето Эратосфена
	{
		//	Создание дека простых чисел
		deque<int> simpleNumbers(CountSimpleNum); // Дек с простыми числами
		unsigned int counter = 1;//  Счётчик количесва простых чисел
		simpleNumbers[0] = 1;
		simpleNumbers[1] = 2;
		{
			deque<bool> sieve(CountSimpleNum);// Булевский дек с метками простых чисел 
			for (unsigned int i = 2; i * i < CountSimpleNum; i++)
			{
				if (sieve[i] == 0)
				{
					for (unsigned int j = i * i; j < CountSimpleNum; j += i)
					{
						sieve[j] = 1;
					}
				}
			}
			
			for (unsigned int i = 2; i < CountSimpleNum; i++)
			{
				if (sieve[i] == 0)
				{
					simpleNumbers[counter] = i;
					counter += 1;
				}
			}
			cout <<"\nЭлементы дека простых чисел: ";
			for(unsigned int i = 0; i < counter; i++){ cout << simpleNumbers.at(i) << " "; }
		}
		//	Сравнение отсортированного дека с деком простых чисел
		{
			unsigned int counters=0;// простых чисел отсортированных деке
			unsigned int EditCounter = counter-1;
			for (unsigned int i = 0; i < CountElem; i++)
			{
				for (unsigned int j = 0; j < counter; j++)
				{
					if (dek1[i] == simpleNumbers[j])
					{
						counters += 1;
						break;
					}
					else if (j >= EditCounter)
						dek1[i] = 0;
				}
			}
			if (counters > 0)
			{
				cout <<"\n\nКоличесво простых чисел в деке: "<<counters<<" \nВсе простые числа из дека: ";
				for (unsigned int i = 0; i < CountElem; i++)
				{
					if (dek1.at(i) != 0)
					{
						cout << dek1.at(i) << " ";
					}
				}
			}
			else if (counters == 0)
			{
				cout << "\nПростых чисел в деке нет.\n";
			}
			cout << endl << endl;
		}
	}
	cin.get();
	return 0;
}
