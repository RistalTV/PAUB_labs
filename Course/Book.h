#pragma once
//==============================================================
// ѕодключЄнные библиотеки
//==============================================================
#include <string>
//==============================================================
// ѕодключЄнные namespace пространства
//==============================================================
using namespace std;

//==============================================================
// ќписание класса
//==============================================================
class Book
{
	public:
		//  онструкторы
		Book();
		Book(int id_book, string name, string authors, string creation_data, string release_data, string content, int count_page);
		Book(string name, string authors, string creation_data, string release_data, string content, int count_page);

		// ---------------------------------------------------------------------------
		//	»нтерфейсные методы
		// ---------------------------------------------------------------------------
		//============================================================================
		// 1) »зменени€ значений
		//============================================================================

			//	ћетод позвол€ющий задать значение параметру _id_book		
			void set_id_book(int id_book);
			//	ћетод позвол€ющий задать значение параметру	_name			
			void set_name(string name);
			//	ћетод позвол€ющий задать значение параметру	_authors		
			void set_authors(string authors);
			//	ћетод позвол€ющий задать значение параметру	_creation_data	
			void set_creation_data(string creation_data);
			//	ћетод позвол€ющий задать значение параметру	_release_data	
			void set_release_data(string release_data);
			//	ћетод позвол€ющий задать значение параметру	_user_took_the_book_date
			void set_user_took_the_book_date(string user_took_the_book_date);
			//	ћетод позвол€ющий задать значение параметру	_content		
			void set_content(string content);
			//	ћетод позвол€ющий задать значение параметру _count_page		
			void set_count_page(int count_page);

		//============================================================================
		// 2) ѕолучение значений	
		//============================================================================

			//	ћетод позвол€ющий получить значение параметра _id_book		
			int		get_id_book();		
			//	ћетод позвол€ющий получить значение параметра _name
			string	get_name();						
			//	ћетод позвол€ющий получить значение параметра _authors
			string	get_authors();				
			//	ћетод позвол€ющий получить значение параметра _creation_data	
			string	get_creation_data();
			//	ћетод позвол€ющий получить значение параметра _release_data	
			string	get_release_data();
			//	ћетод позвол€ющий получить значение параметра _user_took_the_book_date	
			string	get_user_took_the_book_date();
			//	ћетод позвол€ющий получить значение параметра _content		
			string	get_content();		
			//	ћетод позвол€ющий получить значение параметра _count_page
			int		get_count_page();

	
		// ---------------------------------------------------------------------------

	private:
		// Ќомер книги в бд
		int _id_Book;
		// Ќазване книги
		string _Name;
		// јвтор(ы) книги
		string _Authors;
		// ƒата создани€ книги
		string _Creation_data;
		// ƒата выпуска книги
		string _Release_data;
		// ƒата вз€ти€ пользователем книги
		string _user_took_the_book_date;
		// —одержание книги
		string _content;
		//  олличество страниц
		int _Count_Page;

};
