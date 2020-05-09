#pragma once
#include <string>
using namespace std;

class Data
{
public:
	// ����������� 
	Data();
	Data(int day, int month, int year);
	Data(bool flag);
	// ��������� ����
		// ��������� ���
		void set_day(int day);
		// ��������� ������
		void set_month(int month);
		// ��������� ����
		void set_year(int year);
		// ��������� ����
		void set_data(int day, int month, int year);
		// ��������� ���������� ����
		void set_data_now();
	// ��������� ����
		// ��������� ���������� ����
		Data get_Data_Now();
		// ��������� ���������� ����
		string get_str_Data_Now();
		// ��������� ����
		Data get_Data();
		// ��������� ����
		string get_str_Data();
		// ��������� ���
		int get_day();
		// ��������� ������
		int get_month();
		// ��������� ����
		int get_year();
		// ������� �������� ���-�� ���� � ������
		int number_of_days_in_a_month(void);
private:
	// ����
	int _day;
	// �����
	int _month;
	// ���
	int _year;
};
