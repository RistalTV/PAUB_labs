#include "User.h"

void User::set_login(string login)
{
	if (login.length() < 61)
	{
		_login = login;
	}
}

int User::set_pass(string pass)
{
	if (pass.length()<60 && pass.length()>3)
	{
		_pass = pass;
		return 0;
	}
	else
	{
		return 1;
	}
}

void User::set_access(unsigned int access)
{
	switch (access)
	{
	case 0: {
		_access = 0;
		break;
	}
	case 1: {
		_access = 1;
		break;
	}

	}
}

void User::set_id(unsigned int id)
{
	if (id > 0)
	{
		_id = id;
	}
}

void User::set_name(string name)
{
	if (name.length() >= 2)
	{
		_name = name;
	}
}

void User::set_surname(string surname)
{
	if (surname.length() >= 2)
	{
		_surname = surname;
	}
}

void User::set_patronymic(string patronymic)
{
	if (patronymic.length() >= 2)
	{
		_patronymic = patronymic;
	}
}

void User::set_birthday(string birthday)
{
	if (birthday.length() <= 10 && birthday.length() >= 8)
	{ 
		_birthday = birthday;
	}
}

void User::rm_Books_taken(Book book)
{
	for (auto iter = Books_taken.begin(); iter != Books_taken.end(); iter++)
	{
		Books_taken.erase(iter);
		break;
	}
}

void User::rm_Books_Back_Returned(Book book)
{
	for (auto iter = Books_Back_Returned.begin(); iter != Books_Back_Returned.end(); iter++)
	{
		Books_Back_Returned.erase(iter);
		break;
	}
}

void User::add_Books_taken(Book book)
{
	Books_taken.push_back(book);
}

void User::add_Books_Back_Returned(Book book)
{
	Books_Back_Returned.push_back(book);
}

string User::get_login()
{
	return _login;
}

string User::get_pass()
{
	return _pass;
}

int User::get_access()
{
	return _access;
}

int User::get_id()
{
	return _id;
}

string User::get_name()
{
	return _name;
}

string User::get_surname()
{
	return _surname;
}

string User::get_patronymic()
{
	return _patronymic;
}

string User::get_birthday()
{
	return _birthday;
}

deque<Book> User::get_Books_taken()
{
	return Books_taken;
}

deque<Book> User::get_Books_Back_Returned()
{
	return Books_Back_Returned;
}
