#pragma once

class Data
{
public:
	// Контрукторы 
	Data();
	Data(int day, int month, int year);
	// Установка даты
		// Установка дня
		void set_day(int day);
		// Установка месяца
		void set_month(int month);
		// Установка года
		void set_year(int year);
		// Установка даты
		void set_data(int day, int month, int year);
	// Получение даты
		// Получение актуальной даты
		Data get_time_Now();
		// Получение даты
		Data get_time();
		// Получение дня
		int day();
		// Получение месяца
		int month();
		// Получение года
		int year();
private:
	// День
	int _day;
	// Месяц
	int _month;
	// Год
	int _year;
};
