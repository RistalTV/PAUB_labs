#include "stafx.h"

namespace Course {
	/// ==========================================================================================
	///						Клики
	/// ==========================================================================================

		/// Клик в левой панели
		System::Void LK_admin::ViewListAllBooksAndAllUsers_Click(System::Object^ sender, System::EventArgs^ e)
		{
			deque<Book> books = get_deque_books();
			deque<UserBook> ubs = get_deque_books_taken();
			deque<User> users = get_deque_users();
			//Задаём текст заголовку
			this->LabelUpMainRightPanel->Text = DeleteBook->Text;
			// Cоздание невидимой таблицы для DataTable
			{
				DataTable^ table; //Невидимая таблица данных
				DataColumn^ column; //Столбец таблицы
				DataRow^ row; //Строка таблицы

				//Создаем таблицу данных
				table = gcnew DataTable();
				{
					//Названия столбцов
					String^ nameFirstColumn = "ID Книги";
					String^ nameSecondColumn = "ID Пользователя";
					String^ nameThirdColumn = "Название Книги";
					String^ nameFourthColumn = "Автор книги";
					String^ nameFifthColumn = "Имя";
					String^ nameSixthColumn = "Фамилия";
					String^ nameSeventhColumn = "Отчество";

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
					for (size_t i = 0; i < ubs.size(); i++)
					{
						row = table->NewRow();
						row[nameFirstColumn] = gcnew System::String(to_string(ubs[i].Book).c_str());
						row[nameSecondColumn] = gcnew System::String(to_string(ubs[i].User).c_str());
						for (Book book : books)
						{
							if (book.get_id_book() == ubs[i].Book)
							{
								row[nameThirdColumn] = gcnew System::String((book.get_name()).c_str());
								row[nameFourthColumn] = gcnew System::String(book.get_authors().c_str());
								break;
							}
						}
						for (User user : users)
						{
							if (user.get_id() == ubs[i].User)
							{

								row[nameFifthColumn] = gcnew System::String((user.get_name()).c_str());
								row[nameSixthColumn] = gcnew System::String((user.get_surname()).c_str());
								row[nameSeventhColumn] = gcnew System::String((user.get_patronymic()).c_str());

							}
						}
						table->Rows->Add(row);
					}
				}
				//Отображаем таблицу в визуальном компоненте
				ViewListAllBooksAndAllUsers_Grid->DataSource = table;
			}

			//Задаём текст заголовку
			this->LabelUpMainRightPanel->Text = EditDataUsers->Text;
			// Отчищаем ButtonMainRightPanel от лишнего
			this->PanelDeleteBook->Dock = System::Windows::Forms::DockStyle::None;
			this->PanelEditInfoBook->Dock = System::Windows::Forms::DockStyle::None;
			this->PanelRegUser->Dock = System::Windows::Forms::DockStyle::None;
			this->PanelSearch->Dock = System::Windows::Forms::DockStyle::None;
			this->PanelRegNewBook->Dock = System::Windows::Forms::DockStyle::None;
			this->EditDataUsers_panel_EditUser->Dock = System::Windows::Forms::DockStyle::None;
			this->PanelEditDataUsers->Dock = System::Windows::Forms::DockStyle::None;
			// Раскрываем панель кнопки
			this->PanelViewListAllBooksAndAllUsers->Dock = System::Windows::Forms::DockStyle::Fill;

		}
};