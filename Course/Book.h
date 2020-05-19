#pragma once
//==============================================================
// ������������ ����������
//==============================================================
#include <string>
//==============================================================
// ������������ namespace ������������
//==============================================================
using namespace std;

//==============================================================
// �������� ������
//==============================================================
class Book
{
	public:
		// ������������
		Book();
		Book(int id_book, string name, string authors, string creation_data, string release_data, string content, int count_page);
		Book(string name, string authors, string creation_data, string release_data, string content, int count_page);

		// ---------------------------------------------------------------------------
		//	������������ ������
		// ---------------------------------------------------------------------------
		//============================================================================
		// 1) ��������� ��������
		//============================================================================

			//	����� ����������� ������ �������� ��������� _id_book		
			void set_id_book(int id_book);
			//	����� ����������� ������ �������� ���������	_name			
			void set_name(string name);
			//	����� ����������� ������ �������� ���������	_authors		
			void set_authors(string authors);
			//	����� ����������� ������ �������� ���������	_creation_data	
			void set_creation_data(string creation_data);
			//	����� ����������� ������ �������� ���������	_release_data	
			void set_release_data(string release_data);
			//	����� ����������� ������ �������� ���������	_user_took_the_book_date
			void set_user_took_the_book_date(string user_took_the_book_date);
			//	����� ����������� ������ �������� ���������	_content		
			void set_content(string content);
			//	����� ����������� ������ �������� ��������� _count_page		
			void set_count_page(int count_page);

		//============================================================================
		// 2) ��������� ��������	
		//============================================================================

			//	����� ����������� �������� �������� ��������� _id_book		
			int		get_id_book();		
			//	����� ����������� �������� �������� ��������� _name
			string	get_name();						
			//	����� ����������� �������� �������� ��������� _authors
			string	get_authors();				
			//	����� ����������� �������� �������� ��������� _creation_data	
			string	get_creation_data();
			//	����� ����������� �������� �������� ��������� _release_data	
			string	get_release_data();
			//	����� ����������� �������� �������� ��������� _user_took_the_book_date	
			string	get_user_took_the_book_date();
			//	����� ����������� �������� �������� ��������� _content		
			string	get_content();		
			//	����� ����������� �������� �������� ��������� _count_page
			int		get_count_page();

	
		// ---------------------------------------------------------------------------

	private:
		// ����� ����� � ��
		int _id_Book;
		// ������� �����
		string _Name;
		// �����(�) �����
		string _Authors;
		// ���� �������� �����
		string _Creation_data;
		// ���� ������� �����
		string _Release_data;
		// ���� ������ ������������� �����
		string _user_took_the_book_date;
		// ���������� �����
		string _content;
		// ����������� �������
		int _Count_Page;

};
