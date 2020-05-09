#define _CRT_SECURE_NO_WARNINGS
#include "Data.h"
#include <time.h>

Data::Data()
{
}

Data::Data(int day, int month, int year)
{
	set_month(month);
	set_day(day);
	set_year(year);
}

Data::Data(bool flag)
{
	if (flag)
	{
		set_data_now();
	}
}

void Data::set_day(int day)
{
	if (day <= number_of_days_in_a_month())
			_day = day;
	
}

void Data::set_month(int month)
{
	if (month > 0 && month < 13)
	{
		_month = month;
	}
}

void Data::set_year(int year)
{
	if (year > 0 && year < 9999)
	{
		_year = year;
	}
}

void Data::set_data(int day, int month, int year)
{
	set_day(day);
	set_month(month);
	set_year(year);
}

void Data::set_data_now()
{
	time_t now = time(0);
	tm* ltm = localtime(&now);
	set_data(1970 + ltm->tm_year, 1 + ltm->tm_mon, ltm->tm_mday);
}

Data Data::get_Data_Now()
{
	time_t now = time(0);
	tm* ltm = localtime(&now);
	set_data(1970 + ltm->tm_year, 1 + ltm->tm_mon, ltm->tm_mday);
	return Data();
}

string Data::get_str_Data_Now()
{
	time_t now = time(0);
	tm* ltm = localtime(&now);
	set_data(1970 + ltm->tm_year, 1 + ltm->tm_mon, ltm->tm_mday);
	char* intStr;
	intStr = _itoa(_day, intStr, 10);
	string str = string(intStr);
	string Text = str + ".";
	intStr = _itoa(_month, intStr, 10);
	str = string(intStr);
	Text = Text + str + ".";
	intStr = _itoa(_year, intStr, 10);
	str = string(intStr);
	Text = Text + str;
	return Text;
}

Data Data::get_Data()
{
	return Data();
}

string Data::get_str_Data()
{
	char* intStr = _itoa(_day, intStr, 10);
	string str = string(intStr);
	string Text = str + ".";
	intStr = _itoa(_month, intStr, 10);
	str = string(intStr);
	Text = Text + str + ".";
	intStr = _itoa(_year, intStr, 10);
	str = string(intStr);
	Text = Text + str;
	return Text;
}

int Data::get_day()
{
	return _day;
}

int Data::get_month()
{
	return _month;
}

int Data::get_year()
{
	return _year;
}

int Data::number_of_days_in_a_month(void)
{
	int m = _month;
	int y = _year;
	return 28 + ((m + (m / 8)) % 2) + 2 % m + ((1 + (1 - (y % 4 + 2) % (y % 4 + 1)) * ((y % 100 + 2) % (y % 100 + 1)) + (1 - (y % 400 + 2) % (y % 400 + 1))) / m) + (1 / m) - ((1 - (y % 4 + 2) % (y % 4 + 1)) * ((y % 100 + 2) % (y % 100 + 1)) + (1 - (y % 400 + 2) % (y % 400 + 1)) / m);
}
