#pragma once

class Data
{
public:
	// ����������� 
	Data();
	Data(int day, int month, int year);
	// ��������� ����
		// ��������� ���
		void set_day(int day);
		// ��������� ������
		void set_month(int month);
		// ��������� ����
		void set_year(int year);
		// ��������� ����
		void set_data(int day, int month, int year);
	// ��������� ����
		// ��������� ���������� ����
		Data get_time_Now();
		// ��������� ����
		Data get_time();
		// ��������� ���
		int day();
		// ��������� ������
		int month();
		// ��������� ����
		int year();
private:
	// ����
	int _day;
	// �����
	int _month;
	// ���
	int _year;
};
