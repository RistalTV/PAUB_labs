#include "stafx.h"

namespace Course {
	/// =====================================================================================
	///						Клики
	/// =====================================================================================

		/// Клик кнопки "вернуться"

	System::Void LK_admin::LoginMainPanel_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (loginField->Text == "Логин" || passField->Text == "Пароль")
		{
			Msg("Заполните все поля", "Ошибка");
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
					// Cоздание невидимой таблицы для DataTable
					{
						DataTable^ table; //Невидимая таблица данных
						DataColumn^ column; //Столбец таблицы
						DataRow^ row; //Строка таблицы

						//Создаем таблицу данных
						table = gcnew DataTable();
						{
							//Названия столбцов
							String^ nameFirstColumn = "ID";
							String^ nameSecondColumn = "Назв. книги";
							String^ nameThirdColumn = "Автор(ы)";
							String^ nameFourthColumn = "Дата создания";
							String^ nameFifthColumn = "Дата выпуска";
							String^ nameSixthColumn = "Cодерж книги";
							String^ nameSeventhColumn = "Кол-во страниц";



							//Создание и добавление столбцов 
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

							//Заполняем все строчки таблицы
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
						//Отображаем таблицу в визуальном компоненте
						UserMainPanel_Grid->DataSource = table;

					}

					DataLabel->Text = gcnew System::String(text.c_str());
					break;
				}
				}
			}
			else
			{

				Msg("Введите даннык корректно", "Ошибка");
			}
			switch (loc)
			{
			case 0:
			{
				this->LoginMainPanel->Dock = System::Windows::Forms::DockStyle::None;
				this->AdminMainPanel->Dock = System::Windows::Forms::DockStyle::None;
				// Раскрываем панель кнопки
				this->LoginMainPanel->Visible = false;
				this->UserMainPanel->Visible = true;
				this->Text = "Library: Меню пользователя";
				this->UserMainPanel->Dock = System::Windows::Forms::DockStyle::Fill;

				break;
			}
			case 1:
			{
				this->LoginMainPanel->Dock = System::Windows::Forms::DockStyle::None;
				this->UserMainPanel->Dock = System::Windows::Forms::DockStyle::None;
				// Раскрываем панель кнопки
				this->LoginMainPanel->Visible = false;
				this->AdminMainPanel->Visible = true; 
				this->Text = "Library: Меню администратора";
				this->AdminMainPanel->Dock = System::Windows::Forms::DockStyle::Fill;

				break;
			}
			}
		}
	}

	/// =====================================================================================
	/// События
	/// =====================================================================================

		/// Leave

		
		System::Void LK_admin::loginField_Leave(System::Object^ sender, System::EventArgs^ e)
		{
			if (loginField->Text == "")
			{
				loginField->ForeColor = System::Drawing::SystemColors::ButtonFace;
				loginField->Text = "Логин";
			}
		}
		System::Void LK_admin::passField_Leave(System::Object^ sender, System::EventArgs^ e)
		{
			if (passField->Text == "")
			{
				passField->ForeColor = System::Drawing::SystemColors::ButtonFace;
				passField->PasswordChar = '\0';
				passField->Text = "Пароль";
			}
		}


		/// Enter

		System::Void LK_admin::loginField_Enter(System::Object^ sender, System::EventArgs^ e)
		{
			if (loginField->Text == "Логин")
			{
				loginField->ForeColor = System::Drawing::SystemColors::Desktop;
				loginField->Text = "";
			}
		}
		System::Void LK_admin::passField_Enter(System::Object^ sender, System::EventArgs^ e)
		{
			if (passField->Text == "Пароль")
			{
				passField->PasswordChar = 'x';
				passField->ForeColor = System::Drawing::SystemColors::Desktop;
				passField->Text = "";
			}
		}
		

};