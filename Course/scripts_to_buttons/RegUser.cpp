#include "stafx.h"

namespace Course {
	/// ================================================================================================
	///						Клики
	/// ================================================================================================

		/// Клик в левой панели

		System::Void LK_admin::RegUser_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//Задаём текст заголовку
		this->LabelUpMainRightPanel->Text = RegUser->Text;
		// Отчищаем ButtonMainRightPanel от лишнего
		this->PanelDeleteBook->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelEditDataUsers->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelEditInfoBook->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelSearch->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelViewListAllBooksAndAllUsers->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelAddBookToUser->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelRegNewBook->Dock = System::Windows::Forms::DockStyle::None;
		// Раскрываем панель кнопки
		this->PanelRegUser->Dock = System::Windows::Forms::DockStyle::Fill;
		RegUser_Name->ForeColor = System::Drawing::SystemColors::ButtonFace;
		RegUser_Name->Text = "Имя пользователя";
		RegUser_SurName->ForeColor = System::Drawing::SystemColors::ButtonFace;
		RegUser_SurName->Text = "Фамилия пользователя";
		RegUser_patronymic->ForeColor = System::Drawing::SystemColors::ButtonFace;
		RegUser_patronymic->Text = "Отчество пользователя";
		RegUser_login->ForeColor = System::Drawing::SystemColors::ButtonFace;
		RegUser_login->Text = "Логин пользователя";
		RegUser_pass->ForeColor = System::Drawing::SystemColors::ButtonFace;
		RegUser_pass->Text = "Пароль пользователя";
	}
		
		/// Клик в главной панели

		System::Void LK_admin::RegUser_regBtn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (RegUser_pass->Text == "Пароль пользователя" || RegUser_login->Text == "Логин пользователя" || RegUser_patronymic->Text == "Отчество пользователя" || RegUser_SurName->Text == "Фамилия пользователя" || RegUser_Name->Text == "Имя пользователя")
		{
			Msg("Заполните все поля!!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else
		{
			if (RegUser_rBtn_reader->Checked == false && RegUser_rBtn_admin->Checked == false)
			{

				Msg("Выберите роль пользователя!!!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else
			{
				User user;
				if (user.set_pass(CastStrSystemToStd(RegUser_pass->Text)) == 1)
				{
					Msg("Выберите корректный пароль!!!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
				else
				{
					Course::Data birthday_data(RegUser_birthday->Value.Day, RegUser_birthday->Value.Month, RegUser_birthday->Value.Year);
					string birthday = birthday_data.get_str_Data();

					int access;
					if (RegUser_rBtn_reader->Checked == true)
						access = 0;
					else
						access = 1;

					user.set_login(CastStrSystemToStd(RegUser_login->Text));
					user.set_name(CastStrSystemToStd(RegUser_Name->Text));
					user.set_surname(CastStrSystemToStd(RegUser_SurName->Text));
					user.set_patronymic(CastStrSystemToStd(RegUser_patronymic->Text));
					user.set_access(access);
					user.set_birthday(birthday);
					switch (add_to_users(user))
					{
					case 0:
					{
						Msg("Пользователь успешно зарегистрирован!", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
						break;
					}
					case 1:
					{
						Msg("Ошибка при работе с базой данных", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
						break;
					}
					case 2:
					{
						Msg("Ошибка: не хватает данных", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
						break;
					}
					}
				}
			}
		}
	}

	/// ================================================================================================
	/// События
	/// ================================================================================================

		/// Leave

		System::Void LK_admin::RegUser_Name_Leave(System::Object^ sender, System::EventArgs^ e)
		{
			if (RegUser_Name->Text == "")
			{
				RegUser_Name->ForeColor = System::Drawing::SystemColors::ButtonFace;
				RegUser_Name->Text = "Имя пользователя";
			}
		}
		System::Void LK_admin::RegUser_SurName_Leave(System::Object^ sender, System::EventArgs^ e)
		{
			if (RegUser_SurName->Text == "")
			{
				RegUser_SurName->ForeColor = System::Drawing::SystemColors::ButtonFace;
				RegUser_SurName->Text = "Фамилия пользователя";
			}
		}
		System::Void LK_admin::RegUser_patronymic_Leave(System::Object^ sender, System::EventArgs^ e)
		{
			if (RegUser_patronymic->Text == "")
			{
				RegUser_patronymic->ForeColor = System::Drawing::SystemColors::ButtonFace;
				RegUser_patronymic->Text = "Отчество пользователя";
			}
		}
		System::Void LK_admin::RegUser_login_Leave(System::Object^ sender, System::EventArgs^ e)
		{
			if (RegUser_login->Text == "")
			{
				RegUser_login->ForeColor = System::Drawing::SystemColors::ButtonFace;
				RegUser_login->Text = "Логин пользователя";
			}
		}
		System::Void LK_admin::RegUser_pass_Leave(System::Object^ sender, System::EventArgs^ e)
		{
			if (RegUser_pass->Text == "")
			{
				RegUser_pass->ForeColor = System::Drawing::SystemColors::ButtonFace;
				RegUser_pass->Text = "Пароль пользователя";
			}
		}


		/// Enter

		System::Void LK_admin::RegUser_Name_Enter(System::Object^ sender, System::EventArgs^ e)
		{
			if (RegUser_Name->Text == "Имя пользователя")
			{
				RegUser_Name->ForeColor = System::Drawing::SystemColors::Desktop;
				RegUser_Name->Text = "";
			}
		}
		System::Void LK_admin::RegUser_SurName_Enter(System::Object^ sender, System::EventArgs^ e)
		{
			if (RegUser_SurName->Text == "Фамилия пользователя")
			{
				RegUser_SurName->ForeColor = System::Drawing::SystemColors::Desktop;
				RegUser_SurName->Text = "";
			}
		}
		System::Void LK_admin::RegUser_patronymic_Enter(System::Object^ sender, System::EventArgs^ e)
		{
			if (RegUser_patronymic->Text == "Отчество пользователя")
			{
				RegUser_patronymic->ForeColor = System::Drawing::SystemColors::Desktop;
				RegUser_patronymic->Text = "";
			}
		}
		System::Void LK_admin::RegUser_login_Enter(System::Object^ sender, System::EventArgs^ e)
		{
			if (RegUser_login->Text == "Логин пользователя")
			{
				RegUser_login->ForeColor = System::Drawing::SystemColors::Desktop;
				RegUser_login->Text = "";
			}
		}
		System::Void LK_admin::RegUser_pass_Enter(System::Object^ sender, System::EventArgs^ e)
		{
			if (RegUser_pass->Text == "Пароль пользователя")
			{
				RegUser_pass->ForeColor = System::Drawing::SystemColors::Desktop;
				RegUser_pass->Text = "";
			}
		}

};
