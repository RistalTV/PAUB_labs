#include "stafx.h"

namespace Course {
	/// ================================================================================================
	///						�����
	/// ================================================================================================

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
		// ���������� ������ ������
		this->PanelSearch->Dock = System::Windows::Forms::DockStyle::Fill;
	}


};
