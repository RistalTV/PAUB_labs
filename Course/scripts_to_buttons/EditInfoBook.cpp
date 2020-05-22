#include "stafx.h"

namespace Course {
	/// ================================================================================================
	///						�����
	/// ================================================================================================

		/// ���� � ����� ������

		System::Void LK_admin::EditInfoBook_Click(System::Object^ sender, System::EventArgs^ e)
		{
			//����� ����� ���������
			this->LabelUpMainRightPanel->Text = EditInfoBook->Text;
			// �������� ButtonMainRightPanel �� �������
			this->PanelDeleteBook->Dock = System::Windows::Forms::DockStyle::None;
			this->PanelEditDataUsers->Dock = System::Windows::Forms::DockStyle::None;
			this->PanelRegUser->Dock = System::Windows::Forms::DockStyle::None;
			this->PanelSearch->Dock = System::Windows::Forms::DockStyle::None;
			this->PanelRegNewBook->Dock = System::Windows::Forms::DockStyle::None;
			// ���������� ������ ������
			this->PanelEditInfoBook->Dock = System::Windows::Forms::DockStyle::Fill;
		}
	
		
	/// ================================================================================================
	/// �������
	/// ================================================================================================

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
