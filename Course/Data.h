#pragma once
//==============================================================
// ������������ ����������
//==============================================================
#include <string>
#include <time.h>
#include "MessageWarnErrorInfo.h"
//==============================================================
// ������������ namespace ������������
//==============================================================
using namespace std;
namespace Course {
	//==============================================================
	// �������� ������
	//==============================================================
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
		// ������� ������ ������� ��.��.����
		void splitData(string d);
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
		// ��������� ��������� ���
		int get_delta_day(int x1, int x2);
		// ��������� ��������� ������
		int get_delta_month(int x1, int x2);
		// ��������� ��������� ����
		int get_delta_year(int x1, int x2);

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
}