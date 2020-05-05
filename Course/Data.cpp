#include "Data.h"

Data::Data()
{
}

Data::Data(int day, int month, int year)
{
	set_month(month);
	set_day(day);
	set_year(year);
}

void Data::set_day(int day)
{
	switch (_month)
	{
	case 1:
		{
		if (day <= 31)
			_day = day;
		break;
		}
	case 2:
		{
		if (day <= 28)
			_day = day;
		break;
		}
	case 3:
		{
		if (day <= 31)
			_day = day;
		break;
		}
	case 4:
		{
		if (day <= 30)
			_day = day;
		break;
		}
	case 5:
		{
		if (day <= 31)
			_day = day;
		break;
		}
	case 6:
		{
		if (day <= 30)
			_day = day;
		break;
		}
	case 7:
		{
		if (day <= 31)
			_day = day;
		break;
		}
	case 8:
		{
		if (day <= 31)
			_day = day;
		break;
		}
	case 9:
		{
		if (day <= 30)
			_day = day;
		break;
		}	
	case 10:
		{
		if (day <= 31)
			_day = day;
		break;
		}
	case 11:
		{
		if (day <= 30)
			_day = day;
		break;
		}
	case 12:
		{
		if (day <=  31)
			_day = day;
		break;
		}

	}
}

void Data::set_month(int month)
{
}

void Data::set_year(int year)
{
}

void Data::set_data(int day, int month, int year)
{
}

Data Data::get_time_Now()
{
	return Data();
}

Data Data::get_time()
{
	return Data();
}

int Data::day()
{
	return 0;
}

int Data::month()
{
	return 0;
}

int Data::year()
{
	return 0;
}
