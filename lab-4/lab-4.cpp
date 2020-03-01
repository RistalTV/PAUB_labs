// lab-4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <map>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <deque>
#include <cmath>

using namespace std;

class Clas
{
public:
    string NameStreet;
    int NumberHouse;
    Clas()
    {
        NameStreet = " ";
        NumberHouse = 0;
    }
};

int func_scan(void);  // Функция перевода из названия улицы в индекс массива

int main()
{
    setlocale(LC_ALL, "Russian");// Задаём русскую локализацию
    srand((unsigned int)time(NULL));// Задаём семя рандомизации с количесвом секунд прошедших с *1 января 1970 года
    multimap<string, int> streetHome;// Создаём пустое мультиотображение
    deque < class Clas > dekС;
    int const CountElem = 100;// Количество переменных
    string streets[10] = { "1 street", "2 street", "3 street", "4 street", "5 street", "6 street", "7 street", "8 street", "9 street", "10 street" };
    // Заполняем мультиотображение данными (ключ – улица, значение – номер дома) 
    {
        int nums[CountElem];
        for (int i = 0; i < CountElem; i++)
            nums[i] = i + 1;
        for (int i = 0; i < CountElem; i++)
        {
            int randomNum = rand() % 9;
            streetHome.emplace(streets[randomNum], nums[i]);
        }
    }
    // Выводим мультиотображение на экран
    {
        cout << "Мультиотображение" << endl;
        for (int i = 0; i < 70; i++) { cout << "="; }cout << endl;
        int counter = 1;
        bool flag = true;
        cout.width(3); cout << " №";
        cout << " \tУлица\t  Дом\t  |  ";
        cout.width(3); cout << "  №";
        cout << "    Улица       Дом\n ";
        for (int i = 0; i < 56; i++) { cout << "-"; }cout << endl;
        for (auto itMultiMap = streetHome.begin(); itMultiMap!=streetHome.end();itMultiMap++)
        {
            if (flag) 
            {
                cout << "|";
                cout.width(3);
                cout << counter;
                cout << ")  " << itMultiMap->first << "     №";
                cout.width(3);
                cout << itMultiMap->second;
                cout.width(3);
                cout << "   |  ";
                flag = false; 
            }
            else
            { 
                cout.width(3);
                cout << counter;
                cout << ")   " << itMultiMap->first << "     №";
                cout.width(3);
                cout << itMultiMap->second; 
                cout << "    |" << endl;
                flag = true; 
            }
            counter++;
        }
        for (int i = 0; i < 57; i++) { cout << "-"; }cout << endl;
    }
    // Находим минимальный элемент и добавляем его на заданную позицию.
    {
        int NumbMinElem;
        string StreetMinElem;
        int ValueMinElem;
        // Находим минимальный элемент 
        {
            int Counter = 1;
            bool flag = false;
            for (auto itMultiMap = streetHome.begin(); itMultiMap != streetHome.end(); itMultiMap++)
            {
                if (!flag) { ValueMinElem = itMultiMap->second; flag = true; }
                if (ValueMinElem > itMultiMap->second) { ValueMinElem = itMultiMap->second; }
            }
            for (auto itMultiMap = streetHome.begin(); itMultiMap != streetHome.end(); itMultiMap++)
            {
                if (itMultiMap->second == ValueMinElem) 
                { 
                    StreetMinElem = itMultiMap->first;
                    NumbMinElem = Counter;
                    break;
                }
                Counter++;
            }
            cout << "Минимальный элемент: №" << NumbMinElem << ";   Значение: " << ValueMinElem << ";   Улица: " << StreetMinElem << endl;
            for (int i = 0; i < 57; i++) { cout << "-"; }cout <<"\nВведите название улицы для перемещения миним. элемента\n";
        }
        // Добавляем элемент на заданную позицию
        {
            streetHome.emplace(streets[func_scan()], ValueMinElem);
        }
        // Удаляем элемент с бывшей позиции
        {
            deque<int> dek1;
            for (auto itMultiMap = streetHome.begin(); itMultiMap != streetHome.end(); itMultiMap++)
            {
                if (itMultiMap->first == StreetMinElem)
                {
                    dek1.push_back(itMultiMap->second);
                }
            }
            streetHome.erase(StreetMinElem);
            for (int Elem : dek1)
            {
                if (Elem != ValueMinElem) 
                {
                    streetHome.emplace(StreetMinElem, Elem);
                }
            }
        }
    }
    // Выводим изменёное мультиотображение на экран после нахождения минимального элемента
    {
        cout << "Изменёное мультиотображение после нахождения минимального элемента\n";
        for (int i = 0; i < 70; i++) { cout << "="; }cout << endl;
        int counter = 1;
        bool flag = true;
        cout.width(3); cout << " №";
        cout << " \tУлица\t  Дом\t  |  ";
        cout.width(3); cout << "  №";
        cout << "    Улица       Дом\n ";
        for (int i = 0; i < 56; i++) { cout << "-"; }cout << endl;
        for (auto itMultiMap = streetHome.begin(); itMultiMap != streetHome.end(); itMultiMap++)
        {
            if (flag)
            {
                cout << "|";
                cout.width(3);
                cout << counter;
                cout << ")  " << itMultiMap->first << "     №";
                cout.width(3);
                cout << itMultiMap->second;
                cout.width(3);
                cout << "   |  ";
                flag = false;
            }
            else
            {
                cout.width(3);
                cout << counter;
                cout << ")   " << itMultiMap->first << "     №";
                cout.width(3);
                cout << itMultiMap->second;
                cout << "    |" << endl;
                flag = true;
            }
            counter++;
        }
        for (int i = 0; i < 57; i++) { cout << "-"; }cout << endl;
    }
    // Нанаходим элементы большее среднего арифметического и удаляем их
    {
        int SrArif;
        // Находим среднее арифметическое
        {
            int sum = 0;
            for (auto itMultiMap = streetHome.begin(); itMultiMap != streetHome.end(); itMultiMap++)
            {
                sum += itMultiMap->second;
            }
            SrArif = (int)floor(sum / CountElem);
        }
        // Перезаписываем из мультиотображение в дек, при этом ещё не записываем элементы больше ср. ариф.
        // Отчищаем мультиотображение и Записываем в него из дека 
        {
            Clas tempClass;
            for (auto itMultiMap = streetHome.begin(); itMultiMap != streetHome.end(); itMultiMap++)
            {
                if (itMultiMap->second<SrArif) 
                {
                    tempClass.NameStreet = itMultiMap->first;
                    tempClass.NumberHouse = itMultiMap->second;
                    dekС.push_back(tempClass);
                }
            }
            streetHome.clear();
            for (auto it : dekС)
            {
                streetHome.emplace(it.NameStreet, it.NumberHouse);
            }
        }
        // Выводим среднее арифметическое
        {
            cout << "Среднее арифметическое: " << SrArif << endl;
            for (int i = 0; i < 56; i++) { cout << "-"; }cout << endl;
        }
    }
    // Выводим  изменёное мультиотображение на экран после удаления элементов выше ср. арифм.
    {
        cout << "Изменёное мультиотображение после удаления элементов выше ср. арифм.\n";
        for (int i = 0; i < 70; i++) { cout << "="; }cout << endl;
        int counter = 1;
        bool flag = true;
        cout.width(3); cout << " №";
        cout << " \tУлица\t  Дом\t  |  ";
        cout.width(3); cout << "  №";
        cout << "    Улица       Дом\n ";
        for (int i = 0; i < 56; i++) { cout << "-"; }cout << endl;
        for (auto itMultiMap = streetHome.begin(); itMultiMap != streetHome.end(); itMultiMap++)
        {
            if (flag)
            {
                cout << "|";
                cout.width(3);
                cout << counter;
                cout << ")  " << itMultiMap->first << "     №";
                cout.width(3);
                cout << itMultiMap->second;
                cout.width(3);
                cout << "   |  ";
                flag = false;
            }
            else
            {
                cout.width(3);
                cout << counter;
                cout << ")   " << itMultiMap->first << "     №";
                cout.width(3);
                cout << itMultiMap->second;
                cout << "    |" << endl;
                flag = true;
            }
            counter++;
        }
        cout << endl;
        for (int i = 0; i < 57; i++) { cout << "-"; }cout << endl;
    }
    // Находим максимальный элемент и домножаем его на каждый из элементов
    {
        int MaxElem;
        // Находим максимальный элемент
        {
            bool flag = false;
            for (auto itMultiMap = streetHome.begin(); itMultiMap != streetHome.end(); itMultiMap++)
            {
                if (!flag) { MaxElem = itMultiMap->second; flag = true; }
                if (MaxElem< itMultiMap->second){ MaxElem = itMultiMap->second; }
            }
        }
        streetHome.clear();
        // Домнажаем каждый элемент на максимальный элемент
        {
            for (auto itDek : dekС)
            {
                streetHome.emplace(itDek.NameStreet, itDek.NumberHouse*MaxElem);
            }
        }
        // Выводим максимальный элемент
        {
            cout << "Максимальный элемент: " << MaxElem << endl;
            for (int i = 0; i < 56; i++) { cout << "-"; }cout << endl;
        }

    }
    // Выводим  изменёное мультиотображение на экран после домножения на максимальный элемент
    {
        cout << "Изменёное мультиотображение после домножения на максимальный элемент.\n";
        for (int i = 0; i < 70; i++) { cout << "="; }cout << endl;
        int counter = 1;
        bool flag = true;
        cout.width(5); cout << " №";
        cout << " \tУлица\t  Дом\t        |  ";
        cout.width(5); cout << "  №";
        cout << "    Улица        Дом\n ";
        for (int i = 0; i < 63; i++) { cout << "-"; }cout << endl;
        for (auto itMultiMap = streetHome.begin(); itMultiMap != streetHome.end(); itMultiMap++)
        {
            if (flag)
            {
                cout << "|";
                cout.width(5);
                cout << counter;
                cout << ")  " << itMultiMap->first << "     №";
                cout.width(5);
                cout << itMultiMap->second;
                cout.width(3);
                cout << "   |  ";
                flag = false;
            }
            else
            {
                cout.width(5);
                cout << counter;
                cout << ")   " << itMultiMap->first << "     №";
                cout.width(5);
                cout << itMultiMap->second;
                cout << "|" << endl;
                flag = true;
            }
            counter++;
        }
        cout << endl;
        for (int i = 0; i < 63; i++) { cout << "-"; }cout << endl;
    }
    system("pause");
    return 0;
}

// Функция перевода из названия улицы в индекс массива
int func_scan(void)
{
    int Result;
    bool exit=false;
    string scanString[2];
    do 
    {
        cin >> scanString[0]>>scanString[1];
        if (scanString[1] == "street")
        {
            switch (scanString[0][0])
            {
                case ('1')  :  Result = 0; exit = true; break;
                case ('2')  :  Result = 1; exit = true; break;
                case ('3')  :  Result = 2; exit = true; break;
                case ('4')  :  Result = 3; exit = true; break;
                case ('5')  :  Result = 4; exit = true; break;
                case ('6')  :  Result = 5; exit = true; break;
                case ('7')  :  Result = 6; exit = true; break;
                case ('8')  :  Result = 7; exit = true; break;
                case ('9')  :  Result = 8; exit = true; break;
                case ('10') :  Result = 9; exit = true; break;
                default:cout << "\nВведите корректное название улицы: "; exit = false; break;
            }
        }
        cout << endl;
    } 
    while (!exit);
    return Result;
}