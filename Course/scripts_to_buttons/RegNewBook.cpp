#include "stafx.h"

namespace Course {
	/// ================================================================================================
	///						�����
	/// ================================================================================================

		/// ���� � ����� ������

		System::Void LK_admin::RegNewBook_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//����� ����� ���������
		this->LabelUpMainRightPanel->Text = RegNewBook->Text;
		// �������� ButtonMainRightPanel �� �������
		this->PanelDeleteBook->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelEditDataUsers->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelEditInfoBook->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelRegUser->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelSearch->Dock = System::Windows::Forms::DockStyle::None;
		// ���������� ������ ������
		this->PanelRegNewBook->Dock = System::Windows::Forms::DockStyle::Fill;
		NameTextBox->ForeColor = System::Drawing::SystemColors::ButtonFace;
		NameTextBox->Text = "�������� �����";
		AutorsTextBox->ForeColor = System::Drawing::SystemColors::ButtonFace;
		AutorsTextBox->Text = "������ �����";
		ContextTextBox->ForeColor = System::Drawing::SystemColors::ButtonFace;
		ContextTextBox->Text = "C��������� �����";
	}
		
		/// ���� � ������� ������

		System::Void LK_admin::RegBtn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (NameTextBox->Text == "�������� �����" || AutorsTextBox->Text == "������ �����" || ContextTextBox->Text == "C��������� �����")
		{
			Msg("��������� ��� ����!!", "������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else
		{
			Course::Data create_data(creation_data->Value.Day, creation_data->Value.Month, creation_data->Value.Year);
			Course::Data realea_data(release_data->Value.Day, release_data->Value.Month, release_data->Value.Year);

			string str_creation_data = create_data.get_str_Data();
			string str_release_data = realea_data.get_str_Data();
			int int_count_page = System::Convert::ToInt32(count_page->Value);// .ToInt32(count_page->Value);
			Book book(CastStrSystemToStd(NameTextBox->Text), CastStrSystemToStd(AutorsTextBox->Text),  str_creation_data, str_release_data, CastStrSystemToStd(ContextTextBox->Text), int_count_page);

			string text = "���: " + book.get_name() + "\n�����(�): " + book.get_authors() + "\n��� ������������: " + book.get_content() + "\n���� ��������: " + book.get_creation_data() + "\n���� �������: " + book.get_release_data() + "\n���-�� �������: " + std::to_string(book.get_count_page());
			System::String^ text1 = gcnew System::String(text.c_str());
			add_to_books(book);
			Msg(text1, "����", MessageBoxButtons::OK, MessageBoxIcon::Information);
			// deque<Book> books = get_deque_books();
			this->PanelRegUser->Dock = System::Windows::Forms::DockStyle::None;
			
		}
	}

	/// ================================================================================================
	/// �������
	/// ================================================================================================

		/// Enter
		System::Void LK_admin::NameTextBox_Enter(System::Object^ sender, System::EventArgs^ e)
		{
			if (NameTextBox->Text == "�������� �����")
			{
				NameTextBox->ForeColor = System::Drawing::SystemColors::Desktop;
				NameTextBox->Text = "";
			}
		}

		System::Void LK_admin::AutorsTextBox_Enter(System::Object^ sender, System::EventArgs^ e)
		{
			if (AutorsTextBox->Text == "������ �����")
			{
				AutorsTextBox->ForeColor = System::Drawing::SystemColors::Desktop;
				AutorsTextBox->Text = "";
			}
		}

		System::Void LK_admin::ContextTextBox_Enter(System::Object^ sender, System::EventArgs^ e)
		{
			if (ContextTextBox->Text == "C��������� �����")
			{
				ContextTextBox->ForeColor = System::Drawing::SystemColors::Desktop;
				ContextTextBox->Text = "";
			}
		}

		/// Leave

		System::Void LK_admin::NameTextBox_Leave(System::Object^ sender, System::EventArgs^ e)
		{
			if (NameTextBox->Text == "")
			{
				NameTextBox->ForeColor = System::Drawing::SystemColors::ButtonFace;
				NameTextBox->Text = "�������� �����";
			}
		}

		System::Void LK_admin::AutorsTextBox_Leave(System::Object^ sender, System::EventArgs^ e)
		{
			if (AutorsTextBox->Text == "")
			{
				AutorsTextBox->ForeColor = System::Drawing::SystemColors::ButtonFace;
				AutorsTextBox->Text = "������ �����";
			}
		}

		System::Void LK_admin::ContextTextBox_Leave(System::Object^ sender, System::EventArgs^ e)
		{
			if (ContextTextBox->Text == "")
			{
				ContextTextBox->ForeColor = System::Drawing::SystemColors::ButtonFace;
				ContextTextBox->Text = "C��������� �����";
			}
		}
};