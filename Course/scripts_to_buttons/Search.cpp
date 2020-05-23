#include "stafx.h"

namespace Course {
	/// =========================================================================================
	///						�����
	/// ==========================================================================================

		/// ���� � ����� ������

		System::Void LK_admin::Search_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//����� ����� ���������
		this->LabelUpMainRightPanel->Text = Search->Text;
		// �������� ButtonMainRightPanel �� �������
		this->PanelDeleteBook->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelEditDataUsers->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelEditInfoBook->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelRegUser->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelRegNewBook->Dock = System::Windows::Forms::DockStyle::None;
		// �������� PanelSearch �� �������
		this->Search_Find_from_reader->Dock = System::Windows::Forms::DockStyle::None;
		this->Search_Find_from_authors->Dock = System::Windows::Forms::DockStyle::None;
		// ���������� ������ ������
		this->PanelSearch->Dock = System::Windows::Forms::DockStyle::Fill;
		this->Search_Buttons->Dock = System::Windows::Forms::DockStyle::Fill;
		}
		
		///	======================================================================================
		///					Search buttons panel
		/// ======================================================================================
		

			/// ���� �� ������ "��������  ������ �������� ���� �� ������� ��������"
			
			System::Void LK_admin::Search_Buttons_find_from_reader_Click(System::Object^ sender, System::EventArgs^ e)
			{
				deque<User> users = get_deque_users();
				// C������� ��������� ������� ��� DataTable
				{
					DataTable^ table; //��������� ������� ������
					DataColumn^ column; //������� �������
					DataRow^ row; //������ �������

					//������� ������� ������
					table = gcnew DataTable();
					{
						//�������� ��������
						String^ nameFirstColumn = "�������";

						//�������� � ���������� �������� 
						column = gcnew DataColumn(nameFirstColumn, String::typeid);
						table->Columns->Add(column);
						row = table->NewRow();
						row[nameFirstColumn] = gcnew System::String(users[0].get_surname().c_str());

						table->Rows->Add(row);
						//��������� ��� ������� �������
						for (size_t i = 1; i < users.size(); i++)
						{
							row = table->NewRow();
							row[nameFirstColumn] = gcnew System::String(users[i].get_surname().c_str());
							table->Rows->Add(row);
						}
					}
					//���������� ������� � ���������� ����������
					Search_Find_from_reader_Grid_name->DataSource = table;
				}
				//����� ����� ���������
				this->LabelUpMainRightPanel->Text += " | " + Search_Buttons_find_from_reader->Text;
				// �������� PanelSearch �� �������
				this->Search_Buttons->Dock = System::Windows::Forms::DockStyle::None;
				// ���������� ������ ������
				this->Search_Find_from_reader->Dock = System::Windows::Forms::DockStyle::Fill;

			}

			/// ���� �� ������ "�������� ������ ���� �� ������� ������"

			System::Void LK_admin::Search_Buttons_find_from_authors_Click(System::Object^ sender, System::EventArgs^ e)
			{
				deque<Book> books = get_deque_books();
				// C������� ��������� ������� ��� DataTable
				{
					DataTable^ table; //��������� ������� ������
					DataColumn^ column; //������� �������
					DataRow^ row; //������ �������

					//������� ������� ������
					table = gcnew DataTable();
					{
						//�������� ��������
						String^ nameFirstColumn = "�����(�)       ";


						//�������� � ���������� �������� 
						column = gcnew DataColumn(nameFirstColumn, String::typeid);
						table->Columns->Add(column);
						deque<string> authors;
						authors.push_back(books[0].get_authors());
						row = table->NewRow();
						row[nameFirstColumn] = gcnew System::String(books[0].get_authors().c_str());
						table->Rows->Add(row);
						//��������� ��� ������� �������
						for (size_t i = 1; i < books.size(); i++)
						{	
							row = table->NewRow();
							row[nameFirstColumn] = gcnew System::String(books[i].get_authors().c_str());
							table->Rows->Add(row);		
						}
					}
					//���������� ������� � ���������� ����������
					Search_Find_from_authors_Grid_Authors->DataSource = table;
				}
				//����� ����� ���������
				this->LabelUpMainRightPanel->Text += " | " + Search_Buttons_find_from_authors->Text;
				// �������� PanelSearch �� �������
				this->Search_Buttons->Dock = System::Windows::Forms::DockStyle::None;
				// ���������� ������ ������
				this->Search_Find_from_authors->Dock = System::Windows::Forms::DockStyle::Fill;

			}
		///	======================================================================================
		///					Search Find from authors panel
		/// ======================================================================================

			/// ���� �� ������ "�������"

			System::Void LK_admin::Search_Find_from_authors_btn_Click(System::Object^ sender, System::EventArgs^ e)
			{
				//����� ���������� ������
				int index = Search_Find_from_authors_Grid_Authors->CurrentCell->RowIndex;
				//��������� _id � ���������� ������
				String^ Author = Search_Find_from_authors_Grid_Authors->Rows[index]->Cells["�����(�)       "]->Value->ToString();
				string StdAuthor = CastStrSystemToStd(Author);
				// ����� ���������� ����������� 
				Search_Find_from_authors_Count_All->Text = gcnew System::String(to_string(get_count_books_authors(StdAuthor)).c_str());
				//����� ���������� �������� �����������: 
				Search_Find_from_authors_Count_taken->Text = gcnew System::String(to_string(get_count_taken_books_authors(StdAuthor)).c_str());
				deque<Book> books = get_deque_author_from_books(StdAuthor);
				// C������� ��������� ������� ��� DataTable
				{
					DataTable^ table; //��������� ������� ������
					DataColumn^ column; //������� �������
					DataRow^ row; //������ �������

					//������� ������� ������
					table = gcnew DataTable();
					{
						//�������� ��������
						String^ nameFirstColumn = "ID";
						String^ nameSecondColumn = "����. �����";
						String^ nameFourthColumn = "���� ��������";
						String^ nameFifthColumn = "���� �������";
						String^ nameSixthColumn = "C����� �����";
						String^ nameSeventhColumn = "���-�� �������";



						//�������� � ���������� �������� 
						column = gcnew DataColumn(nameFirstColumn, String::typeid);
						table->Columns->Add(column);
						column = gcnew DataColumn(nameSecondColumn, String::typeid);
						table->Columns->Add(column);
						column = gcnew DataColumn(nameFourthColumn, String::typeid);
						table->Columns->Add(column);
						column = gcnew DataColumn(nameFifthColumn, String::typeid);
						table->Columns->Add(column);
						column = gcnew DataColumn(nameSixthColumn, String::typeid);
						table->Columns->Add(column);
						column = gcnew DataColumn(nameSeventhColumn, String::typeid);
						table->Columns->Add(column);

						//��������� ��� ������� �������
						for (size_t i = 0; i < books.size(); i++)
						{

							row = table->NewRow();
							row[nameFirstColumn] = gcnew System::String(to_string(books[i].get_id_book()).c_str());
							row[nameSecondColumn] = gcnew System::String((books[i].get_name()).c_str());
							row[nameFourthColumn] = gcnew System::String((books[i].get_creation_data()).c_str());
							row[nameFifthColumn] = gcnew System::String((books[i].get_release_data()).c_str());
							row[nameSixthColumn] = gcnew System::String((books[i].get_content()).c_str());
							row[nameSeventhColumn] = gcnew System::String(to_string(books[i].get_count_page()).c_str());
							table->Rows->Add(row);
						}
					}
					//���������� ������� � ���������� ����������
					Search_Find_from_authors_Grid_Search->DataSource = table;
				}

			}

		///	======================================================================================
		///					Search Find from reader panel
		/// ======================================================================================

			/// ���� �� ������ "�������"

			System::Void LK_admin::Search_Find_from_reader_btn_Click(System::Object^ sender, System::EventArgs^ e)
			{
				//����� ���������� ������
				int index = Search_Find_from_reader_Grid_name->CurrentCell->RowIndex;
				//��������� _id � ���������� ������
				String^ surname = Search_Find_from_reader_Grid_name->Rows[index]->Cells["�������"]->Value->ToString();
				string StdSurname = CastStrSystemToStd(surname);
				deque<Book> books = get_deque_reader_from_books(StdSurname);
				// C������� ��������� ������� ��� DataTable
				{
					DataTable^ table; //��������� ������� ������
					DataColumn^ column; //������� �������
					DataRow^ row; //������ �������

					//������� ������� ������
					table = gcnew DataTable();
					{
						//�������� ��������
						String^ nameFirstColumn = "ID";
						String^ nameSecondColumn = "����. �����";
						String^ nameThirdColumn = "�����(�)";
						String^ nameFourthColumn = "���� ��������";
						String^ nameFifthColumn = "���� �������";
						String^ nameSixthColumn = "C����� �����";
						String^ nameSeventhColumn = "���-�� �������";



						//�������� � ���������� �������� 
						column = gcnew DataColumn(nameFirstColumn, String::typeid);
						table->Columns->Add(column);
						column = gcnew DataColumn(nameSecondColumn, String::typeid);
						table->Columns->Add(column);
						column = gcnew DataColumn(nameThirdColumn, String::typeid);
						table->Columns->Add(column);
						column = gcnew DataColumn(nameFourthColumn, String::typeid);
						table->Columns->Add(column);
						column = gcnew DataColumn(nameFifthColumn, String::typeid);
						table->Columns->Add(column);
						column = gcnew DataColumn(nameSixthColumn, String::typeid);
						table->Columns->Add(column);
						column = gcnew DataColumn(nameSeventhColumn, String::typeid);
						table->Columns->Add(column);

						//��������� ��� ������� �������
						for (size_t i = 0; i < books.size(); i++)
						{

							row = table->NewRow();
							row[nameFirstColumn] = gcnew System::String(to_string(books[i].get_id_book()).c_str());
							row[nameSecondColumn] = gcnew System::String((books[i].get_name()).c_str());
							row[nameThirdColumn] = gcnew System::String((books[i].get_authors()).c_str());
							row[nameFourthColumn] = gcnew System::String((books[i].get_creation_data()).c_str());
							row[nameFifthColumn] = gcnew System::String((books[i].get_release_data()).c_str());
							row[nameSixthColumn] = gcnew System::String((books[i].get_content()).c_str());
							row[nameSeventhColumn] = gcnew System::String(to_string(books[i].get_count_page()).c_str());
							table->Rows->Add(row);
						}
					}
					//���������� ������� � ���������� ����������
					Search_Find_from_reader_Grid_Select->DataSource = table;
				}

			}
};
