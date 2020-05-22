#include "stafx.h"

namespace Course {
	/// ================================================================================================
	///						Клики
	/// ================================================================================================

		/// Клик в левой панели

		System::Void LK_admin::Search_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//Задаём текст заголовку
		this->LabelUpMainRightPanel->Text = Search->Text;
		// Отчищаем ButtonMainRightPanel от лишнего
		this->PanelDeleteBook->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelEditDataUsers->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelEditInfoBook->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelRegUser->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelRegNewBook->Dock = System::Windows::Forms::DockStyle::None;
		// Раскрываем панель кнопки
		this->PanelSearch->Dock = System::Windows::Forms::DockStyle::Fill;
	}


};
