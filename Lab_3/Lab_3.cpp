// Lab_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <deque>
#include <ctime>
#include <cstdlib>
#include <clocale>
#include <list>

using namespace std;

bool compSort(int a, int b);// компаратор для сортировки по возрастанию


int main() 
{
    setlocale(LC_ALL, "Russian");// Задаём русскую локализацию
    srand((unsigned int)time(NULL));// Задаём семя рандомизации с количесвом секунд прошедших с *1 января 1970 года
    int const CountElem = 100;// Количество элементов в листе
    int const OptionNumber = 15;// Номер варианта
    int counter = 1;// Счётчик
    deque<int> dekNumbersCoincidence;// Дек с номерами совпадениями
    list<int> l1;// Лист с элементами
    // Задаём значения элементам
    {
        for (int i = 0; i < CountElem; i++)     // Создаём лист с количестов CountElem
            l1.push_back(rand() % 100 - 50);    // Задаём значения элементам от -50 до 50
    }
    // Выводим лист первый раз - изночальный 
    {
        cout << "Элементы списка: ";
        auto i1 = l1.begin();
        while (i1 != l1.end())
           cout << *i1++ << " ";
        cout << endl;
    }
    // Нахождение элемента списка, равный номеру варианта 
    {
        for (int elem : l1)
        {
            if (elem == OptionNumber)
            {
                dekNumbersCoincidence.push_back(counter);
            }
            counter++;
        }
    }
    // Вывод элементов списка, равный номеру варианта 
    {
        if (dekNumbersCoincidence.empty())
        {
            cout << "\nСовпадений не найдено.\n\n";
        }
        else
        {
            cout << "\nНомера элементов которые совпали с вариантом: ";
            for (int elem : dekNumbersCoincidence)
            {
                cout << elem << " ";
            }
            cout << endl << endl;
        }

    }
    // Сортируем лист
    {
        l1.sort(compSort);
    }
    // Выводим лист второй раз - отсортированный 
    {
        cout << "Элементы списка после сортировки: ";
        auto i1 = l1.begin();
        while (i1 != l1.end())
            cout << *i1++ << " ";
        cout << endl;
    }
    // Удаление по одному элементу справа и слева от минимального элемента двунаправленного списка
    // Если элементы справа или слева отсутствуют, то удалить сам минимальный элемент
    // Но так, как у нас лист отсортированный по возрастанию, то у нас будет всегда минимальный элемент всегда стоять первым 
    // поэтому удаляем все минимальные элементы и 1 элемент полсе минимальных
    {
        {
            int min;
            counter = 0;
            for (int elem : l1) 
            {
                if (counter == 0) { min = elem; }
                if (elem == min) { counter += 1; }
            }
        }
        counter += 1;
        for(int i=0;i<counter;i++)
            l1.pop_front();
    }
    // Выводим лист третий раз - без минимального элемента
    {
        cout << "\nЭлементы списка без минимального элемента: ";
        auto i1 = l1.begin();
        while (i1 != l1.end())
            cout << *i1++ << " ";
        cout << endl << endl;
    }
    system("pause");
    return 0;
}

// компаратор для сортировки по возрастанию
bool compSort(int a, int b)
{
    return a < b;
}