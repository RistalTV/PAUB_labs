#include "stafx.h"

namespace Course {

	/// ================================================================================================
	///						�����
	/// ================================================================================================

		/// ���� � ����� ������

			System::Void LK_admin::EditDataUsers_Click(System::Object^ sender, System::EventArgs^ e)
			{
				deque<User> user = get_deque_users();
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
					EditDataUsers_panel_select_dataGridView->DataSource = table;
				}

				//����� ����� ���������
				this->LabelUpMainRightPanel->Text = EditDataUsers->Text;
				// �������� ButtonMainRightPanel �� �������
				this->PanelDeleteBook->Dock = System::Windows::Forms::DockStyle::None;
				this->PanelEditInfoBook->Dock = System::Windows::Forms::DockStyle::None;
				this->PanelRegUser->Dock = System::Windows::Forms::DockStyle::None;
				this->PanelSearch->Dock = System::Windows::Forms::DockStyle::None;
				this->PanelRegNewBook->Dock = System::Windows::Forms::DockStyle::None;
				this->EditDataUsers_panel_EditUser->Dock = System::Windows::Forms::DockStyle::None;
				// ���������� ������ ������
				this->PanelEditDataUsers->Dock = System::Windows::Forms::DockStyle::Fill;
				this->EditDataUsers_panel_select->Dock = System::Windows::Forms::DockStyle::Fill;
			}

		/// ���� � ������ ������

			System::Void LK_admin::EditDataUsers_btn_select_Click(System::Object^ sender, System::EventArgs^ e)
			{
				//����� ���������� ������
				int index = EditDataUsers_panel_select_dataGridView->CurrentCell->RowIndex;
				//��������� _id � ���������� ������
				String^ _id = EditDataUsers_panel_select_dataGridView->Rows[index]->Cells["ID"]->Value->ToString();

				Msg("�� ������� id ������������ = " + _id, "����", MessageBoxButtons::OK, MessageBoxIcon::Information);
				// ������� �� ��
				deque<User> users = get_deque_users();
				for (User user : users)
				{
					//gcnew System::String((books[i].get_content()).c_str());
					//row[nameSeventhColumn] = gcnew System::String(to_string(books[i].get_count_page()).c_str());

					if (user.get_id() == atoi(CastStrSystemToStd(_id).c_str()))
					{
						Course::Data da;
						da.splitData(user.get_birthday());
						EditDataUsers_panel_EditUser_birthday->CustomFormat = "dd:MM:yyyy HH:mm";
						DateTime data(da.get_year(), da.get_month(), da.get_day());
						EditDataUsers_panel_EditUser_birthday->Value = data;
						EditDataUsers_panel_EditUser_name->Text = gcnew System::String((user.get_name()).c_str());
						EditDataUsers_panel_EditUser_surname->Text = gcnew System::String((user.get_surname()).c_str());
						EditDataUsers_panel_EditUser_patronymic->Text = gcnew System::String((user.get_patronymic()).c_str());
						EditDataUsers_panel_EditUser_login->Text = gcnew System::String((user.get_login()).c_str());
						EditDataUsers_panel_EditUser_pass->Text = gcnew System::String((user.get_pass()).c_str());
						switch (user.get_access())
						{
						case 0:
							EditDataUsers_panel_EditUser_reader->Checked = true;
							break;
						case 1:
							EditDataUsers_panel_EditUser_admin->Checked = true;
							break;
						}
						EditDataUsers_panel_EditUser_name->ForeColor = System::Drawing::SystemColors::Desktop;
						EditDataUsers_panel_EditUser_surname->ForeColor = System::Drawing::SystemColors::Desktop;
						EditDataUsers_panel_EditUser_patronymic->ForeColor = System::Drawing::SystemColors::Desktop;
						EditDataUsers_panel_EditUser_login->ForeColor = System::Drawing::SystemColors::Desktop;
						EditDataUsers_panel_EditUser_pass->ForeColor = System::Drawing::SystemColors::Desktop;
						EditDataUsers_panel_EditUser_ID->Text = gcnew System::String(to_string(user.get_id()).c_str());
						break;
					}
				}
				this->EditDataUsers_panel_select->Dock = System::Windows::Forms::DockStyle::None;
				// ���������� ������ ������
				this->EditDataUsers_panel_EditUser->Dock = System::Windows::Forms::DockStyle::Fill;
			}

		/// ���� � ������ ��������������

			System::Void LK_admin::EditDataUsers_panel_Edit_btn_save_Click(System::Object^ sender, System::EventArgs^ e)
			{
				if (EditDataUsers_panel_EditUser_pass->Text == "������ ������������" || EditDataUsers_panel_EditUser_login->Text == "����� ������������" || EditDataUsers_panel_EditUser_patronymic->Text == "�������� ������������" || EditDataUsers_panel_EditUser_surname->Text == "������� ������������" || EditDataUsers_panel_EditUser_name->Text == "��� ������������")
				{
					Msg("��������� ��� ����!!", "������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
				else
				{
					if (EditDataUsers_panel_EditUser_reader->Checked == false && EditDataUsers_panel_EditUser_admin->Checked == false)
					{

						Msg("�������� ���� ������������!!!", "������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					}
					else
					{
						User user;
						if (user.set_pass(CastStrSystemToStd(EditDataUsers_panel_EditUser_pass->Text)) == 1)
						{
							Msg("�������� ���������� ������!!!", "������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
						}
						else
						{
							Course::Data birthday_data(EditDataUsers_panel_EditUser_birthday->Value.Day, EditDataUsers_panel_EditUser_birthday->Value.Month, EditDataUsers_panel_EditUser_birthday->Value.Year);
							string birthday = birthday_data.get_str_Data();

							int access;
							if (EditDataUsers_panel_EditUser_reader->Checked == true)
								access = 0;
							else
								access = 1;
							user.set_id(atoi(CastStrSystemToStd(EditDataUsers_panel_EditUser_ID->Text).c_str()));
							user.set_login(CastStrSystemToStd(EditDataUsers_panel_EditUser_login->Text));
							user.set_name(CastStrSystemToStd(EditDataUsers_panel_EditUser_name->Text));
							user.set_surname(CastStrSystemToStd(EditDataUsers_panel_EditUser_surname->Text));
							user.set_patronymic(CastStrSystemToStd(EditDataUsers_panel_EditUser_patronymic->Text));
							user.set_access(access);
							user.set_birthday(birthday);
							// ��������
							edit_user_to_users(user);
							// ������������
							LK_admin::EditDataUsers_Click(sender, e);

						}
					}
				}
			}


			/// ���� �� ������ ������� �������
			System::Void LK_admin::EditDataUsers_panel_EditUser_delete_user_Click(System::Object^ sender, System::EventArgs^ e) {
				
				deque<User> us = get_deque_users();
				int id = atoi(CastStrSystemToStd(EditDataUsers_panel_EditUser_ID->Text).c_str());
				for(User user: us)
					if (user.get_id() == id)
						switch (delete_from_users(user))
						{
						case 0:
						{
							Msg("�������� ������� ���������!", "����", MessageBoxButtons::OK,		MessageBoxIcon::Information);
							break;
						}
						case 1:
						{
							Msg("�������� ������� �� ���������!", "����", MessageBoxButtons::OK,		MessageBoxIcon::Warning);
							break;
						}
						case 2:
						{
							Msg("�� ������� ������!", "����", MessageBoxButtons::OK,		MessageBoxIcon::Information);
							break;
						}
						}
				// ������������
				LK_admin::EditDataUsers_Click(sender, e);

			}

	/// ==========================================================================================
	/// �������
	/// ==========================================================================================
		
			/// Leave

			System::Void LK_admin::EditDataUsers_panel_EditUser_name_Leave(System::Object^ sender, System::EventArgs^ e)
			{
				if (EditDataUsers_panel_EditUser_name->Text == "")
				{
					EditDataUsers_panel_EditUser_name->ForeColor = System::Drawing::SystemColors::ButtonFace;
					EditDataUsers_panel_EditUser_name->Text = "��� ������������";
				}
			}
			System::Void LK_admin::EditDataUsers_panel_EditUser_surname_Leave(System::Object^ sender, System::EventArgs^ e)
			{
				if (EditDataUsers_panel_EditUser_surname->Text == "")
				{
					EditDataUsers_panel_EditUser_surname->ForeColor = System::Drawing::SystemColors::ButtonFace;
					EditDataUsers_panel_EditUser_surname->Text = "������� ������������";
				}
			}
			System::Void LK_admin::EditDataUsers_panel_EditUser_patronymic_Leave(System::Object^ sender, System::EventArgs^ e)
			{
				if (EditDataUsers_panel_EditUser_patronymic->Text == "")
				{
					EditDataUsers_panel_EditUser_patronymic->ForeColor = System::Drawing::SystemColors::ButtonFace;
					EditDataUsers_panel_EditUser_patronymic->Text = "�������� ������������";
				}
			}
			System::Void LK_admin::EditDataUsers_panel_EditUser_login_Leave(System::Object^ sender, System::EventArgs^ e)
			{
				if (EditDataUsers_panel_EditUser_login->Text == "")
				{
					EditDataUsers_panel_EditUser_login->ForeColor = System::Drawing::SystemColors::ButtonFace;
					EditDataUsers_panel_EditUser_login->Text = "����� ������������";
				}
			}
			System::Void LK_admin::EditDataUsers_panel_EditUser_pass_Leave(System::Object^ sender, System::EventArgs^ e)
			{
				if (EditDataUsers_panel_EditUser_pass->Text == "")
				{
					EditDataUsers_panel_EditUser_pass->ForeColor = System::Drawing::SystemColors::ButtonFace;
					EditDataUsers_panel_EditUser_pass->Text = "������ ������������";
				}
			}


			/// Enter

			System::Void LK_admin::EditDataUsers_panel_EditUser_name_Enter(System::Object^ sender, System::EventArgs^ e)
			{
				if (EditDataUsers_panel_EditUser_name->Text == "��� ������������")
				{
					EditDataUsers_panel_EditUser_name->ForeColor = System::Drawing::SystemColors::Desktop;
					EditDataUsers_panel_EditUser_name->Text = "";
				}
			}
			System::Void LK_admin::EditDataUsers_panel_EditUser_surname_Enter(System::Object^ sender, System::EventArgs^ e)
			{
				if (EditDataUsers_panel_EditUser_surname->Text == "������� ������������")
				{
					EditDataUsers_panel_EditUser_surname->ForeColor = System::Drawing::SystemColors::Desktop;
					EditDataUsers_panel_EditUser_surname->Text = "";
				}
			}
			System::Void LK_admin::EditDataUsers_panel_EditUser_patronymic_Enter(System::Object^ sender, System::EventArgs^ e)
			{
				if (EditDataUsers_panel_EditUser_patronymic->Text == "�������� ������������")
				{
					EditDataUsers_panel_EditUser_patronymic->ForeColor = System::Drawing::SystemColors::Desktop;
					EditDataUsers_panel_EditUser_patronymic->Text = "";
				}
			}
			System::Void LK_admin::EditDataUsers_panel_EditUser_login_Enter(System::Object^ sender, System::EventArgs^ e)
			{
				if (EditDataUsers_panel_EditUser_login->Text == "����� ������������")
				{
					EditDataUsers_panel_EditUser_login->ForeColor = System::Drawing::SystemColors::Desktop;
					EditDataUsers_panel_EditUser_login->Text = "";
				}
			}
			System::Void LK_admin::EditDataUsers_panel_EditUser_pass_Enter(System::Object^ sender, System::EventArgs^ e)
			{
				if (EditDataUsers_panel_EditUser_pass->Text == "������ ������������")
				{
					EditDataUsers_panel_EditUser_pass->ForeColor = System::Drawing::SystemColors::Desktop;
					EditDataUsers_panel_EditUser_pass->Text = "";
				}
			}
};
