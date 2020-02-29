// Lab_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <deque>
#include <ctime>
#include <cstdlib>
#include <clocale>
#include <list>

using namespace std;
int array1[]{ 9, 16, 36 };
int array2[]{ 1, 4 };
int main() {
    list<int> l1(array1, array1 + 3);
    list<int> l2(array2, array2 + 2);
    auto i1 = l1.begin();
    l1.splice(++i1, l2);
    cout << "l2 = ";
    auto i2 = l1.begin();
    while (i2 != l1.end())
        cout << *i2++ << " ";
    cout << endl;
    return 0;
}


//int main()
//{
//    setlocale(0, "");
//    srand((unsigned int)time(NULL));
//  
//}
