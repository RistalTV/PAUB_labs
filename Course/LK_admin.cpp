#include "LK_admin.h"
#include "Book.h"
#include "User.h"
#include "MessageWarnErrorInfo.h"
#include <Windows.h>
#include "Func.h"
#include "Data.h"
#include "db.h"


using namespace Course;
using namespace System;
using namespace System::Data;


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew LK_admin);
	return 0;
}

namespace Course {
	
	System::Void LK_admin::exit_Click(System::Object^ sender, System::EventArgs^ e) {
			Application::Exit();
		}
	System::Void LK_admin::RegNewBook_Click(System::Object^ sender, System::EventArgs^ e) {
		//Задаём текст заголовку
		this->LabelUpMainRightPanel->Text = RegNewBook->Text;
		// Отчищаем ButtonMainRightPanel от лишнего
		this->PanelDeleteBook->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelEditDataUsers->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelEditInfoBook->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelRegUser->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelSearch->Dock = System::Windows::Forms::DockStyle::None;
		// Раскрываем панель кнопки
		this->PanelRegNewBook->Dock = System::Windows::Forms::DockStyle::Fill;
	}
	System::Void LK_admin::EditInfoBook_Click(System::Object^ sender, System::EventArgs^ e) {
		//Задаём текст заголовку
		this->LabelUpMainRightPanel->Text = EditInfoBook->Text;
		// Отчищаем ButtonMainRightPanel от лишнего
		this->PanelDeleteBook->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelEditDataUsers->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelRegUser->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelSearch->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelRegNewBook->Dock = System::Windows::Forms::DockStyle::None;
		// Раскрываем панель кнопки
		this->PanelEditInfoBook->Dock = System::Windows::Forms::DockStyle::Fill;
	}
	System::Void LK_admin::DeleteBook_Click(System::Object^ sender, System::EventArgs^ e) {
		//Задаём текст заголовку
		this->LabelUpMainRightPanel->Text = DeleteBook->Text;
		// Отчищаем ButtonMainRightPanel от лишнего
		this->PanelEditDataUsers->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelEditInfoBook->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelRegUser->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelSearch->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelRegNewBook->Dock = System::Windows::Forms::DockStyle::None;
		// Раскрываем панель кнопки
		this->PanelDeleteBook->Dock = System::Windows::Forms::DockStyle::Fill;
	}
	System::Void LK_admin::EditDataUsers_Click(System::Object^ sender, System::EventArgs^ e) {
		//Задаём текст заголовку
		this->LabelUpMainRightPanel->Text = EditDataUsers->Text;
		// Отчищаем ButtonMainRightPanel от лишнего
		this->PanelDeleteBook->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelEditInfoBook->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelRegUser->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelSearch->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelRegNewBook->Dock = System::Windows::Forms::DockStyle::None;
		// Раскрываем панель кнопки
		this->PanelEditDataUsers->Dock = System::Windows::Forms::DockStyle::Fill;
	}
	System::Void LK_admin::Search_Click(System::Object^ sender, System::EventArgs^ e) {
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
	System::Void LK_admin::NameTextBox_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (NameTextBox->Text == "Название книги")
		{
			NameTextBox->ForeColor = System::Drawing::SystemColors::Desktop;
			NameTextBox->Text = "";
		}
	}
	System::Void LK_admin::AutorsTextBox_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (AutorsTextBox->Text == "Авторы книги")
		{
			AutorsTextBox->ForeColor = System::Drawing::SystemColors::Desktop;
			AutorsTextBox->Text = "";
		}
	}
	System::Void LK_admin::ContextTextBox_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (ContextTextBox->Text == "Cодержание книги")
		{
			ContextTextBox->ForeColor = System::Drawing::SystemColors::Desktop;
			ContextTextBox->Text = "";
		}
	}
	System::Void LK_admin::RegUser_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//Задаём текст заголовку
		this->LabelUpMainRightPanel->Text = RegUser->Text;
		// Отчищаем ButtonMainRightPanel от лишнего
		this->PanelDeleteBook->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelEditDataUsers->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelEditInfoBook->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelSearch->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelRegNewBook->Dock = System::Windows::Forms::DockStyle::None;
		// Раскрываем панель кнопки
		this->PanelRegUser->Dock = System::Windows::Forms::DockStyle::Fill;
	}
	System::Void LK_admin::NameTextBox_Leave(System::Object^ sender, System::EventArgs^ e)
	{
		if (NameTextBox->Text == "")
		{
			NameTextBox->ForeColor = System::Drawing::SystemColors::ButtonFace;
			NameTextBox->Text = "Название книги";
		}
	}
	System::Void LK_admin::AutorsTextBox_Leave(System::Object^ sender, System::EventArgs^ e)
	{
		if (AutorsTextBox->Text == "")
		{
			AutorsTextBox->ForeColor = System::Drawing::SystemColors::ButtonFace;
			AutorsTextBox->Text = "Авторы книги";
		}
	}
	System::Void LK_admin::ContextTextBox_Leave(System::Object^ sender, System::EventArgs^ e)
	{
		if (ContextTextBox->Text == "")
		{
			ContextTextBox->ForeColor = System::Drawing::SystemColors::ButtonFace;
			ContextTextBox->Text = "Cодержание книги";
		}
	}
	System::Void LK_admin::RegBtn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (NameTextBox->Text == "Название книги" || AutorsTextBox->Text == "Авторы книги" || ContextTextBox->Text == "Cодержание книги")
		{
			Msg("Заполните все поля!!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else
		{
			Course::Data create_data(creation_data->Value.Day, creation_data->Value.Month, creation_data->Value.Year);
			Course::Data realea_data(release_data->Value.Day, release_data->Value.Month, release_data->Value.Year);

			string str_creation_data = create_data.get_str_Data();
			string str_release_data  = realea_data.get_str_Data();
			int int_count_page = System::Convert::ToInt32(count_page->Value);// .ToInt32(count_page->Value);
			Book book(CastStrSystemToStd(NameTextBox->Text), CastStrSystemToStd(AutorsTextBox->Text),CastStrSystemToStd(ContextTextBox->Text), str_creation_data, str_release_data, int_count_page);
			
			string text = book.get_name() + "\n" + book.get_authors() + "\n" + book.get_content() + "\n" + book.get_creation_data() + "\n" + book.get_release_data() + "\n" + std::to_string(book.get_count_page());
			System::String^ text1 = gcnew System::String(text.c_str());
			add_to_books(book);
			Msg(text1, "Инфо", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
};