#pragma once
#include <string>
#include <deque>
#include "Book.h"
using namespace std;

class User
{
public:
	
private:

	// Логин пользователя
	string _login;
	// Пароль пользователя
	string _pass;
	// Уровень доступа пользователя
	int _access;

	
	// Имя пользователя
	string name;
	// Фамилия пользователя
	string surname;
	// Отчество пользователя
	string patronymic;
	// День рождения пользователя
	string _birthday;


	// 
	deque<Book> books;
	//
};