#include "stafx.h"

namespace Course {
	/// ================================================================================================
	///						�����
	/// ================================================================================================

		/// ���� � ����� ������

		System::Void LK_admin::DeleteBook_Click(System::Object^ sender, System::EventArgs^ e)
	{
		deque<Book> books = get_deque_books();
		//����� ����� ���������
		this->LabelUpMainRightPanel->Text = DeleteBook->Text;
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
			FullListBookInDB_DataGridView->DataSource = table;
		}
		// �������� ButtonMainRightPanel �� �������
		this->PanelEditDataUsers->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelEditInfoBook->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelRegUser->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelSearch->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelRegNewBook->Dock = System::Windows::Forms::DockStyle::None;

		// ���������� ������ ������
		this->PanelDeleteBook->Dock = System::Windows::Forms::DockStyle::Fill;
		this->FullListBookInDB_DataGridView->Location = System::Drawing::Point(-3, 34);
	}
		
		/// ���� � ������� ������

		System::Void LK_admin::DeleteBookPanel_Btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//����� ���������� ������
		int index = FullListBookInDB_DataGridView->CurrentCell->RowIndex;
		//��������� _id � ���������� ������
		String^ _id = FullListBookInDB_DataGridView->Rows[index]->Cells["ID"]->Value->ToString();

		Msg(_id, "����", MessageBoxButtons::OK, MessageBoxIcon::Information);
		// ������� �� ��
		deque<Book> Books = get_deque_books();
		for (Book book : Books)
		{
			if (book.get_id_book() == atoi(CastStrSystemToStd(_id).c_str())) {
				switch (delete_from_books(book))
				{
				case 0:
				{
					Msg("�������� ������� ���������!", "����", MessageBoxButtons::OK, MessageBoxIcon::Information);
					break;
				}
				case 1:
				{
					Msg("�������� ������� �� ���������!", "����", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					break;
				}
				case 2:
				{
					Msg("�� ������� ������!", "����", MessageBoxButtons::OK, MessageBoxIcon::Information);
					break;
				}
				}
			}
		}
		// ������������ ����
		Books.clear();
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
			FullListBookInDB_DataGridView->DataSource = table;
		}

	}

};
