#define _CRT_SECURE_NO_WARNINGS
#include "Data.h"
#include "Func.h"

namespace Course {
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
		set_year(year);
		set_month(month);
		set_day(day);
	}

	void Data::set_data_now()
	{
		time_t now = time(0);
		tm* ltm = localtime(&now);
		set_data(ltm->tm_mday, 1 + ltm->tm_mon, 1970 + ltm->tm_year);
	}

	void Data::splitData(string d)
	{
		if (d[2] == '.'&& d[5] == '.')
		{// полная Х Х . Х Х . Х Х Х Х
		 //        0 1 2 3 4 5 6 7 8 9
			set_year(castCharToInt(d[6]) * 1000 + castCharToInt(d[7]) * 100 + castCharToInt(d[8]) * 10 + castCharToInt(d[9]));
			set_month(castCharToInt(d[3]) * 10 + castCharToInt(d[4]));
			set_day(castCharToInt(d[0])*10+ castCharToInt(d[1]));
		}
		else
		{
			if (d[1] == '.' && d[4] == '.')
			{// 2 символа X . Х Х . Х Х Х Х
			 //           0 1 2 3 4 5 6 7 8
				set_year(castCharToInt(d[5]) * 1000 + castCharToInt(d[6]) * 100 + castCharToInt(d	[7]) * 10 + castCharToInt(d[8]));
				set_month(castCharToInt(d[2]) * 10 + castCharToInt(d[3]));
				set_day(castCharToInt(d[0]));
			}
			else
			{
				if (d[2] == '.' && d[4] == '.')
				{// 1 символ Х X . Х . Х Х Х Х
				 //          0 1 2 3 4 5 6 7 8 
					set_year(castCharToInt(d[5]) * 1000 + castCharToInt(d[6]) * 100 +	castCharToInt(d[7]) * 10 + castCharToInt(d[8]));
					set_month(castCharToInt(d[3]));
					set_day(castCharToInt(d[0]) * 10 + castCharToInt(d[1]));
				}
				else
				{
					if (d[1] == '.' && d[3] == '.')
					{// 1 символ Х . Х . Х Х Х Х
					 //          0 1 2 3 4 5 6 7 
						set_year(castCharToInt(d[4]) * 1000 + castCharToInt(d[5]) * 100 + castCharToInt(d[6]) * 10 + castCharToInt(d[7]));
						set_month(castCharToInt(d[2]));
						set_day(castCharToInt(d[0]));

					}
					else 
					{ 
						Msg("Ошибка в дате", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); 
					}
				}
			}
		}
	}

	Data Data::get_Data_Now()
	{
		time_t now = time(0);
		tm* ltm = localtime(&now);
		set_data(ltm->tm_mday, 1 + ltm->tm_mon, 1970 + ltm->tm_year);
		return Data();
	}

	string Data::get_str_Data_Now()
	{
		time_t now = time(0);
		tm* ltm = localtime(&now);
		set_data(ltm->tm_mday, 1 + ltm->tm_mon, 1970 + ltm->tm_year);
		return std::to_string(_day) + "." + std::to_string(_month) + "." + std::to_string(_year);
	}

	Data Data::get_Data()
	{
		return Data();
	}

	string Data::get_str_Data()
	{
		return std::to_string(_day) + "." + std::to_string(_month) + "." + std::to_string(_year);
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

	int Data::get_delta_day(int x1, int x2)
	{
		return x1 - x2;
	}

	int Data::get_delta_month(int x1, int x2)
	{
		return x1 - x2;
	}

	int Data::get_delta_year(int x1, int x2)
	{
		return x1 - x2;
	}

	int Data::number_of_days_in_a_month(void)
	{
		int m = _month;
		int y = _year;
		return 28 + ((m + (m / 8)) % 2) + 2 % m + ((1 + (1 - (y % 4 + 2) % (y % 4 + 1)) * ((y % 100 + 2) % (y % 100 + 1)) + (1 - (y % 400 + 2) % (y % 400 + 1))) / m) + (1 / m) - ((1 - (y % 4 + 2) % (y % 4 + 1)) * ((y % 100 + 2) % (y % 100 + 1)) + (1 - (y % 400 + 2) % (y % 400 + 1)) / m);
	}
}