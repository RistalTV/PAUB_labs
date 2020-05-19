#include "Book.h"
// ������ �����������
Book::Book() {

}

// ����������� �1
Book::Book(int id_book, string name, string authors, string creation_data, string release_data, string content, int count_page) {
	set_id_book(id_book);
	set_name(name);
	set_authors(authors);
	set_creation_data(creation_data);
	set_release_data(release_data);
	set_content(content);
	set_count_page(count_page);
}
// ����������� �2
Book::Book(string name, string authors, string creation_data, string release_data, string content, int count_page) {
	set_name(name);
	set_authors(authors);
	set_creation_data(creation_data);
	set_release_data(release_data);
	set_content(content);
	set_count_page(count_page);
}

//	����� ����������� ������ �������� ��������� _id_book		
void Book::set_id_book(int id_book) {
	if (id_book >= 0)
	{
		_id_Book = id_book;
	}
};
//	����� ����������� ������ �������� ���������	_name			
void Book::set_name(string name) {
	_Name = name;
};
//	����� ����������� ������ �������� ���������	_authors		
void Book::set_authors(string authors) {
	_Authors = authors;
};
//	����� ����������� ������ �������� ���������	_creation_data	
void Book::set_creation_data(string creation_data) {
	_Creation_data = creation_data;
};
//	����� ����������� ������ �������� ���������	_release_data	
void Book::set_release_data(string release_data) {
	_Release_data = release_data;
};
//	����� ����������� ������ �������� ���������	_content		
void Book::set_content(string content) {
	_content = content;
};
//	����� ����������� ������ �������� ��������� _count_page		
void Book::set_count_page(int count_page) {
	if (count_page > 0)
	{
		_Count_Page = count_page;
	}
};

//	����� ����������� �������� �������� ��������� _id_book		
int		Book::get_id_book() { return _id_Book; };
//	����� ����������� �������� �������� ��������� _name
string	Book::get_name() { return _Name; };
//	����� ����������� �������� �������� ��������� _authors
string	Book::get_authors() { return _Authors; };
//	����� ����������� �������� �������� ��������� _creation_data	
string	Book::get_creation_data() { return _Creation_data; };
//	����� ����������� �������� �������� ��������� _release_data	
string	Book::get_release_data() { return _Release_data; };
//	����� ����������� �������� �������� ��������� _content		
string	Book::get_content() { return _content; };
//	����� ����������� �������� �������� ��������� _count_page
int		Book::get_count_page() { return _Count_Page; };