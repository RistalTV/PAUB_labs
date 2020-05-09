#pragma once
#include <string>
using namespace std;

class Data
{
public:
	// Контрукторы 
	Data();
	Data(int day, int month, int year);
	Data(bool flag);
	// Установка даты
		// Установка дня
		void set_day(int day);
		// Установка месяца
		void set_month(int month);
		// Установка года
		void set_year(int year);
		// Установка даты
		void set_data(int day, int month, int year);
		// Установка актуальной даты
		void set_data_now();
	// Получение даты
		// Получение актуальной даты
		Data get_Data_Now();
		// Получение актуальной даты
		string get_str_Data_Now();
		// Получение даты
		Data get_Data();
		// Получение даты
		string get_str_Data();
		// Получение дня
		int get_day();
		// Получение месяца
		int get_month();
		// Получение года
		int get_year();
		// Формула подсчёта кол-ва дней в месяце
		int number_of_days_in_a_month(void);
private:
	// День
	int _day;
	// Месяц
	int _month;
	// Год
	int _year;
};
