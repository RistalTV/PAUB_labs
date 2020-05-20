#include "db.h"
#include "Func.h"

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
		Values += "'" + std::to_string(user.get_id())+ ", ";
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
		string Values = std::to_string(book.get_id_book()) + ", ";
		Values += "'" + std::to_string(user.get_id()) + ", ";
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

int delete_from_books(Book book)
{
	SQLiteConnection^ db = gcnew SQLiteConnection();
	try
	{
		string ConStr = "Data Source=\"" + string(path_db) + "\"";
		db->ConnectionString = gcnew System::String(ConStr.c_str());
		db->Open();
		string Values = std::to_string(book.get_id_book());
		string cmdText = "DELETE FROM books WHERE id = " + Values + " ;";
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

int delete_from_users(User user)
{
	SQLiteConnection^ db = gcnew SQLiteConnection();
	try
	{
		string ConStr = "Data Source=\"" + string(path_db) + "\"";
		db->ConnectionString = gcnew System::String(ConStr.c_str());
		db->Open();
		string Values = std::to_string(user.get_id());
		string cmdText = "DELETE FROM users WHERE id = " + Values + " ;";
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

int delete_from_books_back_returned(Book book, User user)
{
	SQLiteConnection^ db = gcnew SQLiteConnection();
	try
	{
		string ConStr = "Data Source=\"" + string(path_db) + "\"";
		db->ConnectionString = gcnew System::String(ConStr.c_str());
		db->Open();
		string v1 = std::to_string(book.get_id_book());
		string v2 = std::to_string(user.get_id());
		string cmdText = "DELETE FROM `books_back_returned` WHERE `id_book` = "+ v1 +" AND `id_user` =" + v2;
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

int delete_from_books_taken(Book book, User user)
{
	SQLiteConnection^ db = gcnew SQLiteConnection();
	try
	{
		string ConStr = "Data Source=\"" + string(path_db) + "\"";
		db->ConnectionString = gcnew System::String(ConStr.c_str());
		db->Open();
		string v1 = std::to_string(book.get_id_book());
		string v2 = std::to_string(user.get_id());
		string cmdText = "DELETE FROM `books_taken` WHERE `id_book` = " + v1 + " AND `id_user` =" + v2;
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

deque<Book> get_deque_books()
{
	deque<Book> books;

	SQLiteConnection^ db = gcnew SQLiteConnection();
	try
	{
		string ConStr = "Data Source=\"" + string(path_db) + "\"";
		db->ConnectionString = gcnew System::String(ConStr.c_str());
		db->Open();
		try
		{
			SQLiteCommand^ cmdSelect = db->CreateCommand();
			//SQL запрос
			cmdSelect->CommandText = "SELECT * FROM books;";
			SQLiteDataReader^ reader = cmdSelect->ExecuteReader();
			//В sb будем записывать
			String^ sb;
			//Пробегаем по каждой записи
			int Counter = 1;
			Book b1;
			while (reader->Read()) {
				//В каждой записи пробегаем по всем столбцам
				for (int colCtr = 0; colCtr < reader->FieldCount; ++colCtr) {
					//Добавлем значение столбца в sb
					sb = reader->GetValue(colCtr)->ToString();
					string stdSb = CastStrSystemToStd(sb->ToString());
					switch (Counter)
					{
					case 1: {b1.set_id_book(atoi(stdSb.c_str()));	 Counter++; break; }
					case 2: {b1.set_name(stdSb);					 Counter++; break; }
					case 3: {b1.set_authors(stdSb);					 Counter++; break; }
					case 4: {b1.set_creation_data(stdSb);		     Counter++; break; }
					case 5: {b1.set_release_data(stdSb);			 Counter++; break; }
					case 6: {b1.set_content(stdSb);					 Counter++; break; }
					case 7: {b1.set_count_page(atoi(stdSb.c_str())); Counter = 1; break; }
					}
				}
				books.push_back(b1);
			}
			//Выводим результат
			//Msg(to_string(books.size()), "Инфо", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ e)
		{
			Msg("Error Executing SQL: " + e->ToString(), "Exception While Displaying MyTable ...");
		}
		db->Close();
	}
	finally
	{
		delete (IDisposable^)db;
	}
	return books;
}

deque<User> get_deque_users()
{
	deque<User> users;

	SQLiteConnection^ db = gcnew SQLiteConnection();
	try
	{
		string ConStr = "Data Source=\"" + string(path_db) + "\"";
		db->ConnectionString = gcnew System::String(ConStr.c_str());
		db->Open();
		try
		{
			SQLiteCommand^ cmdSelect = db->CreateCommand();
			//SQL запрос
			cmdSelect->CommandText = "SELECT * FROM users;";
			SQLiteDataReader^ reader = cmdSelect->ExecuteReader();
			//В sb будем записывать
			String^ sb;
			//Пробегаем по каждой записи
			int Counter = 1;
			User u1;
			while (reader->Read()) {
				//В каждой записи пробегаем по всем столбцам
				for (int colCtr = 0; colCtr < reader->FieldCount; ++colCtr) {
					//Добавлем значение столбца в sb
					sb = reader->GetValue(colCtr)->ToString();
					string stdSb = CastStrSystemToStd(sb->ToString());
					switch (Counter)
					{
					case 1: {u1.set_id(atoi(stdSb.c_str()));	 Counter++; break; }
					case 2: {u1.set_login(stdSb);				 Counter++; break; }
					case 3: {u1.set_pass(stdSb);				 Counter++; break; }
					case 4: {u1.set_access(atoi(stdSb.c_str())); Counter++; break; }
					case 5: {u1.set_name(stdSb);				 Counter++; break; }
					case 6: {u1.set_surname(stdSb);				 Counter++; break; }
					case 8: {u1.set_patronymic(stdSb);			 Counter++; break; }
					case 9: {u1.set_birthday(stdSb);			 Counter=1; break; }
					}
				}
				users.push_back(u1);
			}
			//Выводим результат
			//Msg(users.size, "Инфо", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ e)
		{
			Msg("Error Executing SQL: " + e->ToString(), "Exception While Displaying MyTable ...");
		}
		db->Close();
	}
	finally
	{
		delete (IDisposable^)db;
	}
	return users;
}

UserBook get_deque_books_back_returned()
{
	UserBook ub;

	SQLiteConnection^ db = gcnew SQLiteConnection();
	try
	{
		string ConStr = "Data Source=\"" + string(path_db) + "\"";
		db->ConnectionString = gcnew System::String(ConStr.c_str());
		db->Open();
		try
		{
			SQLiteCommand^ cmdSelect = db->CreateCommand();
			//SQL запрос
			cmdSelect->CommandText = "SELECT * FROM books_back_returned;";
			SQLiteDataReader^ reader = cmdSelect->ExecuteReader();
			//В sb будем записывать
			String^ sb;
			//Пробегаем по каждой записи
			int Counter = 1;
			Book b1;
			User u1;
			while (reader->Read()) {
				//В каждой записи пробегаем по всем столбцам
				for (int colCtr = 0; colCtr < reader->FieldCount; ++colCtr) {
					//Добавлем значение столбца в sb
					sb = reader->GetValue(colCtr)->ToString();
					string stdSb = CastStrSystemToStd(sb->ToString());
					switch (Counter)
					{
					case 1: {b1.set_id_book(atoi(stdSb.c_str()));	 Counter++; break; }
					case 2: {u1.set_id(atoi(stdSb.c_str()));		 Counter++; break; }
					case 3: {b1.set_user_took_the_book_date(stdSb);	 Counter=1; break; }
					}
				}
				ub.Book.push_back(b1);
				ub.User.push_back(u1);
			}
			//Выводим результат
			//Msg(books.size, "Инфо", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ e)
		{
			Msg("Error Executing SQL: " + e->ToString(), "Exception While Displaying MyTable ...");
		}
		db->Close();
	}
	finally
	{
		delete (IDisposable^)db;
	}
	return ub;
}

UserBook get_deque_books_taken()
{
	UserBook ub;

	SQLiteConnection^ db = gcnew SQLiteConnection();
	try
	{
		string ConStr = "Data Source=\"" + string(path_db) + "\"";
		db->ConnectionString = gcnew System::String(ConStr.c_str());
		db->Open();
		try
		{
			SQLiteCommand^ cmdSelect = db->CreateCommand();
			//SQL запрос
			cmdSelect->CommandText = "SELECT * FROM books_taken;";
			SQLiteDataReader^ reader = cmdSelect->ExecuteReader();
			//В sb будем записывать
			String^ sb;
			//Пробегаем по каждой записи
			int Counter = 1;
			Book b1;
			User u1;
			while (reader->Read()) {
				//В каждой записи пробегаем по всем столбцам
				for (int colCtr = 0; colCtr < reader->FieldCount; ++colCtr) {
					//Добавлем значение столбца в sb
					sb = reader->GetValue(colCtr)->ToString();
					string stdSb = CastStrSystemToStd(sb->ToString());
					switch (Counter)
					{
					case 1: {b1.set_id_book(atoi(stdSb.c_str()));	 Counter++; break; }
					case 2: {u1.set_id(atoi(stdSb.c_str()));		 Counter++; break; }
					case 3: {b1.set_user_took_the_book_date(stdSb);	 Counter = 1; break; }
					}
				}
				ub.Book.push_back(b1);
				ub.User.push_back(u1);
			}
			//Выводим результат
			//Msg(books.size, "Инфо", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ e)
		{
			Msg("Error Executing SQL: " + e->ToString(), "Exception While Displaying MyTable ...");
		}
		db->Close();
	}
	finally
	{
		delete (IDisposable^)db;
	}
	return ub;
}

int get_access_user(int id)
{
	SQLiteConnection^ db = gcnew SQLiteConnection();
	try
	{
		string ConStr = "Data Source=\"" + string(path_db) + "\"";
		db->ConnectionString = gcnew System::String(ConStr.c_str());
		db->Open();
		try
		{
			SQLiteCommand^ cmdSelect = db->CreateCommand();
			//SQL запрос
			string Values = to_string(id);
			string cmdText = "SELECT id = " + Values +" FROM users;";
			cmdSelect->CommandText = gcnew System::String(cmdText.c_str());
			SQLiteDataReader^ reader = cmdSelect->ExecuteReader();
			//В sb будем записывать
			String^ sb;
			//Пробегаем по каждой записи
			int Counter = 1;
			while (reader->Read()) {
				//В каждой записи пробегаем по всем столбцам
				for (int colCtr = 0; colCtr < reader->FieldCount; ++colCtr) {
					//Добавлем значение столбца в sb
					sb = reader->GetValue(colCtr)->ToString();
					string stdSb = CastStrSystemToStd(sb->ToString());
					switch (Counter)
					{
					case 1: {Counter++; break; }
					case 2: {Counter++; break; }
					case 3: {Counter++; break; }
					case 4: {return(atoi(stdSb.c_str()));		     Counter=1; break; }
					}
				}
			}
			//Выводим результат
			//Msg(books.size, "Инфо", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ e)
		{
			Msg("Error Executing SQL: " + e->ToString(), "Exception While Displaying MyTable ...");
		}
		db->Close();
	}
	finally
	{
		delete (IDisposable^)db;
	}
}

UserInfo validation_login(string login, string pass)
{
	UserInfo UI;

	SQLiteConnection^ db = gcnew SQLiteConnection();
	try
	{
		string ConStr = "Data Source=\"" + string(path_db) + "\"";
		db->ConnectionString = gcnew System::String(ConStr.c_str());
		db->Open();
		try
		{
			SQLiteCommand^ cmdSelect = db->CreateCommand();
			//SQL запрос
			string V1 = "'" + login + "'";
			string V2 = "'" + pass + "'";
			string cmdText = "SELECT login = " + V1 + " AND " + V2 + " FROM users;";
			cmdSelect->CommandText = gcnew System::String(cmdText.c_str());
			SQLiteDataReader^ reader = cmdSelect->ExecuteReader();
			//В sb будем записывать
			String^ sb;
			//Пробегаем по каждой записи
			int Counter = 1;
			User u1;
			while (reader->Read()) {
				//В каждой записи пробегаем по всем столбцам
				for (int colCtr = 0; colCtr < reader->FieldCount; ++colCtr) {
					//Добавлем значение столбца в sb
					sb = reader->GetValue(colCtr)->ToString();
					string stdSb = CastStrSystemToStd(sb->ToString());
					switch (Counter)
					{
					case 1: {u1.set_id(atoi(stdSb.c_str()));	 Counter++; break; }
					case 2: {u1.set_login(stdSb);				 Counter++; break; }
					case 3: {u1.set_pass(stdSb);				 Counter++; break; }
					case 4: {u1.set_access(atoi(stdSb.c_str())); Counter++; break; }
					case 5: {u1.set_name(stdSb);				 Counter++; break; }
					case 6: {u1.set_surname(stdSb);				 Counter++; break; }
					case 8: {u1.set_patronymic(stdSb);			 Counter++; break; }
					case 9: {u1.set_birthday(stdSb);			 Counter = 1; break; }
					}
				}
				if (u1.get_id() != 0 || u1.get_login() != string("0") || u1.get_pass() != string("0"))
				{
					UI.user = u1;
					UI.valid_login = true;
					UI.access = u1.get_access();
					return UI;
				}

			}
		}
		catch (Exception^ e)
		{
			Msg("Error Executing SQL: " + e->ToString(), "Exception While Displaying MyTable ...");
		}
		db->Close();
	}
	finally
	{
		delete (IDisposable^)db;
	}
}
