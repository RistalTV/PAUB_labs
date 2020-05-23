#include "stafx.h"

namespace Course {
	/// ================================================================================================
	///						�����
	/// ================================================================================================

		/// ���� � ����� ������

		System::Void LK_admin::EditInfoBook_Click(System::Object^ sender, System::EventArgs^ e)
		{

			deque<Book> books = get_deque_books(); 
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
				EditInfoBook_dataGridView->DataSource = table;
			}

			//����� ����� ���������
			this->LabelUpMainRightPanel->Text = EditInfoBook->Text;
			// �������� ButtonMainRightPanel �� �������
			this->PanelDeleteBook->Dock = System::Windows::Forms::DockStyle::None;
			this->PanelEditDataUsers->Dock = System::Windows::Forms::DockStyle::None;
			this->PanelRegUser->Dock = System::Windows::Forms::DockStyle::None;
			this->PanelSearch->Dock = System::Windows::Forms::DockStyle::None;
			this->PanelViewListAllBooksAndAllUsers->Dock = System::Windows::Forms::DockStyle::None;
			this->PanelAddBookToUser->Dock = System::Windows::Forms::DockStyle::None;
			this->PanelRegNewBook->Dock = System::Windows::Forms::DockStyle::None;
			// ���������� ������ ������
			this->PanelEditInfoBook->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelEditInfoBook_select->Dock = System::Windows::Forms::DockStyle::Fill;

		}
		
		/// ���� � select

		System::Void LK_admin::EditInfoBook_select_btn_Click(System::Object^ sender, System::EventArgs^ e)
		{
			//����� ���������� ������
			int index = EditInfoBook_dataGridView->CurrentCell->RowIndex;
			//��������� _id � ���������� ������
			String^ _id = EditInfoBook_dataGridView->Rows[index]->Cells["ID"]->Value->ToString();

			Msg("�� ������� id ����� = " + _id, "����", MessageBoxButtons::OK, MessageBoxIcon::Information);
			deque<Book> books = get_deque_books();
			for (Book book : books)
			{
				if (book.get_id_book() == atoi(CastStrSystemToStd(_id).c_str()))
				{
					Course::Data da1;
					Course::Data da2;					
					da1.splitData(book.get_creation_data());
					EditInfoBook_creation_data->CustomFormat = "dd:MM:yyyy HH:mm";
					DateTime data1(da1.get_year(), da1.get_month(), da1.get_day());
					EditInfoBook_creation_data->Value = data1;
					da2.splitData(book.get_release_data());
					EditInfoBook_release_data->CustomFormat = "dd:MM:yyyy HH:mm";
					DateTime data2(da2.get_year(), da2.get_month(), da2.get_day());
					EditInfoBook_release_data->Value = data2;
					EditInfoBook_count_page->Value = System::Convert::ToDecimal(book.get_count_page());
					EditInfoBook_NameTextBox->Text = gcnew System::String((book.get_name()).c_str());
					EditInfoBook_AutorsTextBox->Text = gcnew System::String((book.get_authors()).c_str());
					EditInfoBook_ContextTextBox->Text = gcnew System::String((book.get_content()).c_str());
					EditInfoBook_NameTextBox->ForeColor = System::Drawing::SystemColors::Desktop;
					EditInfoBook_AutorsTextBox->ForeColor = System::Drawing::SystemColors::Desktop;
					EditInfoBook_ContextTextBox->ForeColor = System::Drawing::SystemColors::Desktop;
					lEditInfoBook_edit_ID->Text = gcnew System::String(to_string(book.get_id_book()).c_str());
					break;
				}
			}
			this->PanelEditInfoBook_select->Dock = System::Windows::Forms::DockStyle::None;
			// ���������� ������ ������
			this->PanelEditInfoBook_edit->Dock = System::Windows::Forms::DockStyle::Fill;
		}

		/// ���� � edit
		System::Void LK_admin::EditInfoBook_save_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (EditInfoBook_NameTextBox->Text == "�������� �����" || EditInfoBook_AutorsTextBox->Text == "������ �����" || EditInfoBook_ContextTextBox->Text == "C��������� �����")
			{
				Msg("��������� ��� ����!!", "������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else
			{
				Course::Data create_data(EditInfoBook_creation_data->Value.Day, EditInfoBook_creation_data->Value.Month, EditInfoBook_creation_data->Value.Year);
				Course::Data realea_data(EditInfoBook_release_data->Value.Day, EditInfoBook_release_data->Value.Month, EditInfoBook_release_data->Value.Year);

				string str_creation_data = create_data.get_str_Data();
				string str_release_data = realea_data.get_str_Data();
				int int_count_page = System::Convert::ToInt32(count_page->Value);// .ToInt32(count_page->Value);
				Book book(CastStrSystemToStd(NameTextBox->Text), CastStrSystemToStd(AutorsTextBox->Text), CastStrSystemToStd(ContextTextBox->Text), str_creation_data, str_release_data, int_count_page);

				edit_book_to_books(book);
				Msg("������ ��������", "����", MessageBoxButtons::OK, MessageBoxIcon::Information);
				
			}
			EditInfoBook_Click(sender, e);
			this->PanelEditInfoBook_edit->Dock = System::Windows::Forms::DockStyle::None;
			// ���������� ������ ������
			this->PanelEditInfoBook_select->Dock = System::Windows::Forms::DockStyle::Fill;

		}
		
		
	/// ================================================================================================
	/// �������
	/// ================================================================================================

		
		

		/// Enter
		System::Void LK_admin::EditInfoBook_NameTextBox_Enter(System::Object^ sender, System::EventArgs^ e)
		{
			if (EditInfoBook_NameTextBox->Text == "�������� �����")
			{
				EditInfoBook_NameTextBox->ForeColor = System::Drawing::SystemColors::Desktop;
				EditInfoBook_NameTextBox->Text = "";
			}
		}

		System::Void LK_admin::EditInfoBook_AutorsTextBox_Enter(System::Object^ sender, System::EventArgs^ e)
		{
			if (EditInfoBook_AutorsTextBox->Text == "������ �����")
			{
				EditInfoBook_AutorsTextBox->ForeColor = System::Drawing::SystemColors::Desktop;
				EditInfoBook_AutorsTextBox->Text = "";
			}
		}

		System::Void LK_admin::EditInfoBook_ContextTextBox_Enter(System::Object^ sender, System::EventArgs^ e)
		{
			if (EditInfoBook_ContextTextBox->Text == "C��������� �����")
			{
				EditInfoBook_ContextTextBox->ForeColor = System::Drawing::SystemColors::Desktop;
				EditInfoBook_ContextTextBox->Text = "";
			}
		}

		/// Leave

		System::Void LK_admin::EditInfoBook_NameTextBox_Leave(System::Object^ sender, System::EventArgs^ e)
		{
			if (EditInfoBook_NameTextBox->Text == "")
			{
				EditInfoBook_NameTextBox->ForeColor = System::Drawing::SystemColors::ButtonFace;
				EditInfoBook_NameTextBox->Text = "�������� �����";
			}
		}

		System::Void LK_admin::EditInfoBook_AutorsTextBox_Leave(System::Object^ sender, System::EventArgs^ e)
		{
			if (EditInfoBook_AutorsTextBox->Text == "")
			{
				EditInfoBook_AutorsTextBox->ForeColor = System::Drawing::SystemColors::ButtonFace;
				EditInfoBook_AutorsTextBox->Text = "������ �����";
			}
		}

		System::Void LK_admin::EditInfoBook_ContextTextBox_Leave(System::Object^ sender, System::EventArgs^ e)
		{
			if (EditInfoBook_ContextTextBox->Text == "")
			{
				EditInfoBook_ContextTextBox->ForeColor = System::Drawing::SystemColors::ButtonFace;
				EditInfoBook_ContextTextBox->Text = "C��������� �����";
			}
		}


		

};
