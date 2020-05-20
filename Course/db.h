#pragma once
// =============================================
// Подключённые библиотеки
#include "Book.h"
#include "User.h"
#include <cliext/vector>
#include <deque>
#include "MessageWarnErrorInfo.h"

//==============================================================
// Подключённые namespace пространства
//==============================================================
using namespace std;
using namespace cliext;
using namespace System::Data::SQLite;

// =============================================
// Константные переменные
	// Путь до файла базы данных
	const auto path_db = "C:\\projects\\PAUB_labs\\Course\\data.db";

// =============================================
// Структуры

	// Структура состоящий из 2 дэков
	struct UserBook
	{
		deque<User> User;
		deque<Book> Book;
	};
	// Структура которою передают на входе
	struct UserInfo
	{
		User user;
		bool valid_login;
		int access;
	};
// =============================================
// Функции добавления в таблицы бд

	// Добавление в таблицу books (0 - хорошо, 1 - ошибка, 2 - нехватает данных)
	int add_to_books(Book book);
	// Добавление в таблицу users (0 - хорошо, 1 - ошибка, 2 - нехватает данных)
	int add_to_users(User user);
	// Добавление в таблицу books_back_returned (0 - хорошо, 1 - ошибка, 2 - нехватает данных)
	int add_to_books_back_returned(Book book, User user);
	// Добавление в таблицу books_taken (0 - хорошо, 1 - ошибка, 2 - нехватает данных)
	int add_to_books_taken(Book book, User user);

// =============================================
// Функции удаления из талиц бд
	
	// Удаление из талицы books (0 - хорошо, 1 - ошибка, 2 - нехватает данных)
	int delete_from_books(Book book);
	// Удаление из талицы users (0 - хорошо, 1 - ошибка, 2 - нехватает данных)
	int delete_from_users(User user);
	// Удаление из талицы books_back_returned (0 - хорошо, 1 - ошибка, 2 - нехватает данных)
	int delete_from_books_back_returned(Book book, User user);
	// Удаление из талицы books_taken (0 - хорошо, 1 - ошибка, 2 - нехватает данных)
	int delete_from_books_taken(Book book, User user);

// =============================================
// Функции получения данных из талиц дб

	// Получение данных из талицы books
	deque<Book> get_deque_books();
	// Получение данных из талицы users 
	deque<User> get_deque_users();
	// Получение данных из талицы books_back_returned
	UserBook get_deque_books_back_returned();
	// Получение данных из талицы books_taken
	UserBook get_deque_books_taken();
	// Получение уровня доступа
	int get_access_user(int id);

// =============================================
// Функции валидации

	// Проверка на вход
	UserInfo validation_login(string login, string pass);
