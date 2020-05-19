#include "db.h"
int add_to_books(Book book)
{
	SQLiteConnection^ db = gcnew SQLiteConnection();
	try
	{
		string ConStr = "Data Source=\"" + string(path_db) + "\"";
		db->ConnectionString = gcnew System::String(ConStr.c_str());
		db->Open();
		string Values = "'" + book.get_name()			+ "', ";
			  Values += "'" + book.get_authors()		+ "', ";
			  Values += "'" + book.get_creation_data()	+ "', ";
			  Values += "'" + book.get_release_data()	+ "', ";
			  Values += "'" + book.get_content()		+ "', ";
			  Values += std::to_string(book.get_count_page());
		string cmdText = "INSERT INTO books (name, authors, creation_data, release_data, content, count_page) VALUES( " + Values + " );";
		SQLiteCommand^ cmdInsertValue = db->CreateCommand();
		cmdInsertValue->CommandText = gcnew System::String(cmdText.c_str());
		cmdInsertValue->ExecuteNonQuery();


		db->Close();
		return 0;
	}
	catch (Exception^ e)
	{
		Msg("Error Executing SQL: " + e->ToString(), "Exception ...");
		return 1;
	}
	finally
	{
		delete (IDisposable^)db;
	}
}

int add_to_users(User user)
{
	SQLiteConnection^ db = gcnew SQLiteConnection();
	try
	{
		string ConStr = "Data Source=\"" + string(path_db) + "\"";
		db->ConnectionString = gcnew System::String(ConStr.c_str());
		db->Open();
		string Values = "'" + user.get_login() + "', ";
		Values += "'" + user.get_pass() + "', ";
		Values += "" + std::to_string(user.get_access()) + ", ";
		Values += "'" + user.get_name() + "', ";
		Values += "'" + user.get_surname() + "', ";
		Values += "'" + user.get_patronymic() + "', ";
		Values += "'" + user.get_birthday() + "', ";
		string cmdText = "INSERT INTO users (login, pass, access, name, surname, patronymic, birthday) VALUES( " + Values + " );";
		SQLiteCommand^ cmdInsertValue = db->CreateCommand();
		cmdInsertValue->CommandText = gcnew System::String(cmdText.c_str());
		cmdInsertValue->ExecuteNonQuery();


		db->Close();
		return 0;
	}
	catch (Exception^ e)
	{
		Msg("Error Executing SQL: " + e->ToString(), "Exception ...");
		return 1;
	}
	finally
	{
		delete (IDisposable^)db;
	}
}

int add_to_books_back_returned(Book book, User user)
{
	SQLiteConnection^ db = gcnew SQLiteConnection();
	try
	{
		string ConStr = "Data Source=\"" + string(path_db) + "\"";
		db->ConnectionString = gcnew System::String(ConStr.c_str());
		db->Open();
		string Values = std::to_string(book.get_id_book()) + ", ";
		Values += "'" + std::to_string(user.get_id)+ ", ";
		Values += "'" + book.get_user_took_the_book_date() + "', ";
		string cmdText = "INSERT INTO books_back_returned (id_book, id_user, user_took_the_book_date) VALUES( " + Values + " );";
		SQLiteCommand^ cmdInsertValue = db->CreateCommand();
		cmdInsertValue->CommandText = gcnew System::String(cmdText.c_str());
		cmdInsertValue->ExecuteNonQuery();
		db->Close();
		return 0;
	}
	catch (Exception^ e)
	{
		Msg("Error Executing SQL: " + e->ToString(), "Exception ...");
		return 1;
	}
	finally
	{
		delete (IDisposable^)db;
	}
	return 0;
}

int add_to_books_taken(Book book, User user)
{
	SQLiteConnection^ db = gcnew SQLiteConnection();
	try
	{
		string ConStr = "Data Source=\"" + string(path_db) + "\"";
		db->ConnectionString = gcnew System::String(ConStr.c_str());
		db->Open();
		string Values = "'" + book.get_name() + "', ";
		Values += "'" + book.get_authors() + "', ";
		Values += "'" + book.get_creation_data() + "', ";
		Values += "'" + book.get_release_data() + "', ";
		Values += "'" + book.get_content() + "', ";
		Values += std::to_string(book.get_count_page());
		string cmdText = "INSERT INTO books (name, authors, creation_data, release_data, content, count_page) VALUES( " + Values + " );";
		SQLiteCommand^ cmdInsertValue = db->CreateCommand();
		cmdInsertValue->CommandText = gcnew System::String(cmdText.c_str());
		cmdInsertValue->ExecuteNonQuery();


		db->Close();
		return 0;
	}
	catch (Exception^ e)
	{
		Msg("Error Executing SQL: " + e->ToString(), "Exception ...");
		return 1;
	}
	finally
	{
		delete (IDisposable^)db;
	}
	return 0;
}

int delete_from_books(Book book)
{
	return 0;
}

int delete_from_users(User user)
{
	return 0;
}

int delete_from_books_back_returned(Book book, User user)
{
	return 0;
}

int delete_from_books_taken(Book book, User user)
{
	return 0;
}

deque<Book> get_deque_books()
{
	return deque<Book>();
}

deque<User> get_deque_users()
{
	return deque<User>();
}

UserBook get_deque_books_back_returned()
{
	return UserBook();
}

UserBook get_deque_books_taken()
{
	return UserBook();
}

int get_access_user(int acess)
{
	return 0;
}

bool validation_login(string login, string pass)
{
	return false;
}
