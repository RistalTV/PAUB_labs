#pragma once
#include <string>
#include <deque>
#include "Book.h"
using namespace std;

class User
{
public:
	
private:

	// ����� ������������
	string _login;
	// ������ ������������
	string _pass;
	// ������� ������� ������������
	int _access;

	
	// ��� ������������
	string name;
	// ������� ������������
	string surname;
	// �������� ������������
	string patronymic;
	// ���� �������� ������������
	string _birthday;


	// 
	deque<Book> books;
	//
};