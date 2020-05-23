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
		int User;
		int Book;
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
// Функции получения данных из таблиц дб

	// Получение данных из таблицы books
	deque<Book> get_deque_books();
	// Получение данных из таблицы users 
	deque<User> get_deque_users();
	// Получение данных из таблицы books_taken
	deque <UserBook> get_deque_books_taken();
	// Получение данных из таблицы books
	deque<Book> get_deque_author_from_books(string Author);
	// Получение данных из таблицы books
	deque<Book> get_deque_reader_from_books(string Reader);
	// Получение уровня доступа
	int get_access_user(int id);
	// Кол-во книг автора по имени
	int get_count_books_authors(string FindAuthor);
	// Кол-во выданных книг автора по имени
	int get_count_taken_books_authors(string FindAuthor);

// =============================================
// Функции валидации

	// Проверка на вход
	UserInfo validation_login(string login, string pass);

// =============================================
// Функции изменения

	// Изменяет данные пользователя
	// loc: 
	// 1 - login,
	// 2 - pass,
	// 3 - access,
	// 4 - name,
	// 5 - surname,
	// 6 - patronymic,
	// 7 - birthday
	void edit_user_to_users(int loc, string Str, int id);
	void edit_user_to_users(User user);

	// Изменяет данные о книге
		// loc: 
		// 1 - name			,
		// 2 - authors		,	
		// 3 - creation_data,
		// 4 - release_data	,
		// 5 - content		,
		// 6 - count_page	
	void edit_book_to_books(int loc, string Str, int id);
	void edit_book_to_books(Book book);


