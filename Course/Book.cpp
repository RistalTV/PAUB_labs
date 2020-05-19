#include "Book.h"
// ѕустой конструктор
Book::Book() {

}

//  онструктор є1
Book::Book(int id_book, string name, string authors, string creation_data, string release_data, string content, int count_page) {
	set_id_book(id_book);
	set_name(name);
	set_authors(authors);
	set_creation_data(creation_data);
	set_release_data(release_data);
	set_content(content);
	set_count_page(count_page);
}
//  онструктор є2
Book::Book(string name, string authors, string creation_data, string release_data, string content, int count_page) {
	set_name(name);
	set_authors(authors);
	set_creation_data(creation_data);
	set_release_data(release_data);
	set_content(content);
	set_count_page(count_page);
}

//	ћетод позвол€ющий задать значение параметру _id_book		
void Book::set_id_book(int id_book) {
	if (id_book >= 0)
	{
		_id_Book = id_book;
	}
};
//	ћетод позвол€ющий задать значение параметру	_name			
void Book::set_name(string name) {
	_Name = name;
};
//	ћетод позвол€ющий задать значение параметру	_authors		
void Book::set_authors(string authors) {
	_Authors = authors;
};
//	ћетод позвол€ющий задать значение параметру	_creation_data	
void Book::set_creation_data(string creation_data) {
	_Creation_data = creation_data;
};
//	ћетод позвол€ющий задать значение параметру	_release_data	
void Book::set_release_data(string release_data) {
	_Release_data = release_data;
};
//	ћетод позвол€ющий задать значение параметру	_content		
void Book::set_content(string content) {
	_content = content;
};
//	ћетод позвол€ющий задать значение параметру _count_page		
void Book::set_count_page(int count_page) {
	if (count_page > 0)
	{
		_Count_Page = count_page;
	}
};

//	ћетод позвол€ющий получить значение параметра _id_book		
int		Book::get_id_book() { return _id_Book; };
//	ћетод позвол€ющий получить значение параметра _name
string	Book::get_name() { return _Name; };
//	ћетод позвол€ющий получить значение параметра _authors
string	Book::get_authors() { return _Authors; };
//	ћетод позвол€ющий получить значение параметра _creation_data	
string	Book::get_creation_data() { return _Creation_data; };
//	ћетод позвол€ющий получить значение параметра _release_data	
string	Book::get_release_data() { return _Release_data; };
//	ћетод позвол€ющий получить значение параметра _content		
string	Book::get_content() { return _content; };
//	ћетод позвол€ющий получить значение параметра _count_page
int		Book::get_count_page() { return _Count_Page; };