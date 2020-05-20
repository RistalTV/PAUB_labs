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
		deque<User> User;
		deque<Book> Book;
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
// ������� ��������� ������ �� ����� ��

	// ��������� ������ �� ������ books
	deque<Book> get_deque_books();
	// ��������� ������ �� ������ users 
	deque<User> get_deque_users();
	// ��������� ������ �� ������ books_back_returned
	UserBook get_deque_books_back_returned();
	// ��������� ������ �� ������ books_taken
	UserBook get_deque_books_taken();
	// ��������� ������ �������
	int get_access_user(int id);

// =============================================
// ������� ���������

	// �������� �� ����
	UserInfo validation_login(string login, string pass);
