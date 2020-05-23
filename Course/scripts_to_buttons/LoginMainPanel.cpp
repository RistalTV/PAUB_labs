#include "stafx.h"

namespace Course {
	/// =====================================================================================
	///						�����
	/// =====================================================================================

		/// ���� ������ "���������"

	System::Void LK_admin::LoginMainPanel_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (loginField->Text == "�����" || passField->Text == "������")
		{
			Msg("��������� ��� ����", "������");
		}
		else
		{
			int loc;
			string login = CastStrSystemToStd(loginField->Text);
			string pass = CastStrSystemToStd(passField->Text);
			UserInfo UI = validation_login(login, pass);
			if (UI.valid_login)
			{
				loc = UI.user.get_access();
				switch (loc)
				{
				case 0:
				{
					string text = UI.user.get_name() + " " + UI.user.get_surname() + " " + UI.user.get_patronymic() + " " + UI.user.get_birthday();
					string StdSurname = UI.user.get_surname();
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
						UserMainPanel_Grid->DataSource = table;

					}

					DataLabel->Text = gcnew System::String(text.c_str());
					break;
				}
				}
			}
			else
			{

				Msg("������� ������ ���������", "������");
			}
			switch (loc)
			{
			case 0:
			{
				this->LoginMainPanel->Dock = System::Windows::Forms::DockStyle::None;
				this->AdminMainPanel->Dock = System::Windows::Forms::DockStyle::None;
				// ���������� ������ ������
				this->LoginMainPanel->Visible = false;
				this->UserMainPanel->Visible = true;
				this->Text = "Library: ���� ������������";
				this->UserMainPanel->Dock = System::Windows::Forms::DockStyle::Fill;

				break;
			}
			case 1:
			{
				this->LoginMainPanel->Dock = System::Windows::Forms::DockStyle::None;
				this->UserMainPanel->Dock = System::Windows::Forms::DockStyle::None;
				// ���������� ������ ������
				this->LoginMainPanel->Visible = false;
				this->AdminMainPanel->Visible = true; 
				this->Text = "Library: ���� ��������������";
				this->AdminMainPanel->Dock = System::Windows::Forms::DockStyle::Fill;

				break;
			}
			}
		}
	}

	/// =====================================================================================
	/// �������
	/// =====================================================================================

		/// Leave

		
		System::Void LK_admin::loginField_Leave(System::Object^ sender, System::EventArgs^ e)
		{
			if (loginField->Text == "")
			{
				loginField->ForeColor = System::Drawing::SystemColors::ButtonFace;
				loginField->Text = "�����";
			}
		}
		System::Void LK_admin::passField_Leave(System::Object^ sender, System::EventArgs^ e)
		{
			if (passField->Text == "")
			{
				passField->ForeColor = System::Drawing::SystemColors::ButtonFace;
				passField->PasswordChar = '\0';
				passField->Text = "������";
			}
		}


		/// Enter

		System::Void LK_admin::loginField_Enter(System::Object^ sender, System::EventArgs^ e)
		{
			if (loginField->Text == "�����")
			{
				loginField->ForeColor = System::Drawing::SystemColors::Desktop;
				loginField->Text = "";
			}
		}
		System::Void LK_admin::passField_Enter(System::Object^ sender, System::EventArgs^ e)
		{
			if (passField->Text == "������")
			{
				passField->PasswordChar = 'x';
				passField->ForeColor = System::Drawing::SystemColors::Desktop;
				passField->Text = "";
			}
		}
		

};