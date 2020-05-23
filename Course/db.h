#pragma once
// =============================================
// ������������ ����������
#include "Book.h"
#include "User.h"
#include <cliext/vector>
#include <deque>
#include "MessageWarnErrorInfo.h"

//==============================================================
// ������������ namespace ������������
//==============================================================
using namespace std;
using namespace cliext;
using namespace System::Data::SQLite;

// =============================================
// ����������� ����������
	// ���� �� ����� ���� ������
	const auto path_db = "C:\\projects\\PAUB_labs\\Course\\data.db";

// =============================================
// ���������

	// ��������� ��������� �� 2 �����
	struct UserBook
	{
		int User;
		int Book;
	};
	// ��������� ������� �������� �� �����
	struct UserInfo
	{
		User user;
		bool valid_login;
		int access;
	};
// =============================================
// ������� ���������� � ������� ��

	// ���������� � ������� books (0 - ������, 1 - ������, 2 - ��������� ������)
	int add_to_books(Book book);
	// ���������� � ������� users (0 - ������, 1 - ������, 2 - ��������� ������)
	int add_to_users(User user);
	// ���������� � ������� books_back_returned (0 - ������, 1 - ������, 2 - ��������� ������)
	int add_to_books_back_returned(Book book, User user);
	// ���������� � ������� books_taken (0 - ������, 1 - ������, 2 - ��������� ������)
	int add_to_books_taken(Book book, User user);

// =============================================
// ������� �������� �� ����� ��
	
	// �������� �� ������ books (0 - ������, 1 - ������, 2 - ��������� ������)
	int delete_from_books(Book book);
	// �������� �� ������ users (0 - ������, 1 - ������, 2 - ��������� ������)
	int delete_from_users(User user);
	// �������� �� ������ books_back_returned (0 - ������, 1 - ������, 2 - ��������� ������)
	int delete_from_books_back_returned(Book book, User user);
	// �������� �� ������ books_taken (0 - ������, 1 - ������, 2 - ��������� ������)
	int delete_from_books_taken(Book book, User user);

// =============================================
// ������� ��������� ������ �� ������ ��

	// ��������� ������ �� ������� books
	deque<Book> get_deque_books();
	// ��������� ������ �� ������� users 
	deque<User> get_deque_users();
	// ��������� ������ �� ������� books_taken
	deque <UserBook> get_deque_books_taken();
	// ��������� ������ �� ������� books
	deque<Book> get_deque_author_from_books(string Author);
	// ��������� ������ �� ������� books
	deque<Book> get_deque_reader_from_books(string Reader);
	// ��������� ������ �������
	int get_access_user(int id);
	// ���-�� ���� ������ �� �����
	int get_count_books_authors(string FindAuthor);
	// ���-�� �������� ���� ������ �� �����
	int get_count_taken_books_authors(string FindAuthor);

// =============================================
// ������� ���������

	// �������� �� ����
	UserInfo validation_login(string login, string pass);

// =============================================
// ������� ���������

	// �������� ������ ������������
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

	// �������� ������ � �����
		// loc: 
		// 1 - name			,
		// 2 - authors		,	
		// 3 - creation_data,
		// 4 - release_data	,
		// 5 - content		,
		// 6 - count_page	
	void edit_book_to_books(int loc, string Str, int id);
	void edit_book_to_books(Book book);


