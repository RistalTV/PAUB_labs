#include "stafx.h"
#include "..\LK_admin.h"

namespace Course {
	/// =====================================================================================
	///						�����
	/// =====================================================================================

		/// ���� � ����� ������

		System::Void LK_admin::AddBookToUser_Click(System::Object^ sender,	System::EventArgs^ e)
		{
		//����� ����� ���������
		this->LabelUpMainRightPanel->Text = AddBookToUser->Text;
		deque<User> user = get_deque_users();
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
				String^ nameSecondColumn = "�����";
				String^ nameThirdColumn = "������";
				String^ nameFourthColumn = "������� �������";
				String^ nameFifthColumn = "���";
				String^ nameSixthColumn = "�������";
				String^ nameSeventhColumn = "��������";
				String^ nameEithinColumn = "���� ��������";

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
				column = gcnew DataColumn(nameEithinColumn, String::typeid);
				table->Columns->Add(column);

				//��������� ��� ������� �������
				for (size_t i = 0; i < user.size(); i++)
				{
					row = table->NewRow();
					row[nameFirstColumn] = gcnew System::String(to_string(user[i].get_id()).c_str());
					row[nameSecondColumn] = gcnew System::String((user[i].get_login()).c_str());
					row[nameThirdColumn] = gcnew System::String((user[i].get_pass()).c_str());
					row[nameFourthColumn] = gcnew System::String(to_string(user[i].get_access()).c_str());
					row[nameFifthColumn] = gcnew System::String((user[i].get_name()).c_str());
					row[nameSixthColumn] = gcnew System::String((user[i].get_surname()).c_str());
					row[nameSeventhColumn] = gcnew System::String((user[i].get_patronymic()).c_str());
					row[nameEithinColumn] = gcnew System::String((user[i].get_birthday()).c_str());
					table->Rows->Add(row);
				}
			}
			//���������� ������� � ���������� ����������
			PanelAddBookToUser_User_Grid->DataSource = table;
		}
		// �������� ButtonMainRightPanel �� �������
		this->PanelDeleteBook->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelEditInfoBook->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelRegUser->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelSearch->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelRegNewBook->Dock = System::Windows::Forms::DockStyle::None;
		this->EditDataUsers_panel_EditUser->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelEditDataUsers->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelViewListAllBooksAndAllUsers->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelAddBookToUser->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelAddBookToUser_Book->Dock = System::Windows::Forms::DockStyle::None;
		// ���������� ������ ������
		this->PanelAddBookToUser->Dock = System::Windows::Forms::DockStyle::Fill;
		this->PanelAddBookToUser_User->Dock = System::Windows::Forms::DockStyle::Fill;

		}

		
		/// ���� � PanelAddBookToUser_User

		System::Void LK_admin::PanelAddBookToUser_User_btn_Click(System::Object^ sender, System::EventArgs^ e) {
			//����� ����� ���������
			this->LabelUpMainRightPanel->Text = AddBookToUser->Text;
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
					String^ nameFirstColumn = "ID";
					String^ nameSecondColumn = "�������� �����";
					String^ nameThirdColumn = "�����(�)";
					String^ nameFourthColumn = "���� ��������";
					String^ nameFifthColumn = "���� �������";
					String^ nameSixthColumn = "C��������� �����";
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
				PanelAddBookToUser_Book_Grid->DataSource = table;
			}

			// �������� ButtonMainRightPanel �� �������
			this->PanelDeleteBook->Dock = System::Windows::Forms::DockStyle::None;
			this->PanelEditInfoBook->Dock = System::Windows::Forms::DockStyle::None;
			this->PanelRegUser->Dock = System::Windows::Forms::DockStyle::None;
			this->PanelSearch->Dock = System::Windows::Forms::DockStyle::None;
			this->PanelRegNewBook->Dock = System::Windows::Forms::DockStyle::None;
			this->EditDataUsers_panel_EditUser->Dock = System::Windows::Forms::DockStyle::None;
			this->PanelEditDataUsers->Dock = System::Windows::Forms::DockStyle::None;
			this->PanelViewListAllBooksAndAllUsers->Dock = System::Windows::Forms::DockStyle::None;
			this->PanelAddBookToUser_User->Dock = System::Windows::Forms::DockStyle::None;
			// ���������� ������ ������
			this->PanelAddBookToUser->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelAddBookToUser_Book->Dock = System::Windows::Forms::DockStyle::Fill;

		}

		/// ���� � PanelAddBookToUser_Book

		System::Void LK_admin::PanelAddBookToUser_Book_btn_Click(System::Object^ sender, System::EventArgs^ e) {
			// Book
			//����� ���������� ������
			int index = PanelAddBookToUser_Book_Grid->CurrentCell->RowIndex;
			//��������� _id � ���������� ������
			String^ _id = PanelAddBookToUser_Book_Grid->Rows[index]->Cells["ID"]->Value->ToString();
			// User
			//����� ���������� ������
			index = PanelAddBookToUser_User_Grid->CurrentCell->RowIndex;
			//��������� _id � ���������� ������
			String^ id = PanelAddBookToUser_User_Grid->Rows[index]->Cells["ID"]->Value->ToString();
			User user;
			Book book;
			user.set_id(atoi(CastStrSystemToStd(id).c_str()));
			book.set_id_book(atoi(CastStrSystemToStd(_id).c_str()));
			switch (add_to_books_taken(book, user))
			{
			case 0:
			{
				Msg("���������� ������� ���������!", "����", MessageBoxButtons::OK, MessageBoxIcon::Information);
				break;
			}
			case 1:
			{
				Msg("���������� ������� �� ���������!", "����", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				break;
			}
			case 2:
			{
				Msg("�� ������� ������!", "����", MessageBoxButtons::OK, MessageBoxIcon::Information);
				break;
			}
			}
			// �������
			ViewListAllBooksAndAllUsers_Click(sender, e);
		}

};