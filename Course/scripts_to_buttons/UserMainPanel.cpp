#include "stafx.h"

namespace Course {
	/// ====================================================================================
	///						Клики
	/// ====================================================================================

		/// Клик 
		System::Void LK_admin::UserMainPanel_btn_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->UserMainPanel->Dock = System::Windows::Forms::DockStyle::None;
			this->AdminMainPanel->Dock = System::Windows::Forms::DockStyle::None;
			// Раскрываем панель кнопки

			this->UserMainPanel->Visible = false;
			this->AdminMainPanel->Visible = false;
			this->LoginMainPanel->Visible = true;
			this->Text = "Library: Меню авторизации";
			this->LoginMainPanel->Dock = System::Windows::Forms::DockStyle::Fill;

		}

};