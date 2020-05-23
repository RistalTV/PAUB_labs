#include "stafx.h"

namespace Course {
	/// =========================================================================================
	///						Клики
	/// ==========================================================================================

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
		// Отчищаем PanelSearch от лишнего
		this->Search_Find_from_reader->Dock = System::Windows::Forms::DockStyle::None;
		this->Search_Find_from_authors->Dock = System::Windows::Forms::DockStyle::None;
		// Раскрываем панель кнопки
		this->PanelSearch->Dock = System::Windows::Forms::DockStyle::Fill;
		this->Search_Buttons->Dock = System::Windows::Forms::DockStyle::Fill;
		}
		
		///	======================================================================================
		///					Search buttons panel
		/// ======================================================================================
		

			/// Клик по кнопке "Показать  список выданных книг по фамилии читателя"
			
			System::Void LK_admin::Search_Buttons_find_from_reader_Click(System::Object^ sender, System::EventArgs^ e)
			{
				deque<User> users = get_deque_users();
				// Cоздание невидимой таблицы для DataTable
				{
					DataTable^ table; //Невидимая таблица данных
					DataColumn^ column; //Столбец таблицы
					DataRow^ row; //Строка таблицы

					//Создаем таблицу данных
					table = gcnew DataTable();
					{
						//Названия столбцов
						String^ nameFirstColumn = "Фамилия";

						//Создание и добавление столбцов 
						column = gcnew DataColumn(nameFirstColumn, String::typeid);
						table->Columns->Add(column);
						row = table->NewRow();
						row[nameFirstColumn] = gcnew System::String(users[0].get_surname().c_str());

						table->Rows->Add(row);
						//Заполняем все строчки таблицы
						for (size_t i = 1; i < users.size(); i++)
						{
							row = table->NewRow();
							row[nameFirstColumn] = gcnew System::String(users[i].get_surname().c_str());
							table->Rows->Add(row);
						}
					}
					//Отображаем таблицу в визуальном компоненте
					Search_Find_from_reader_Grid_name->DataSource = table;
				}
				//Задаём текст заголовку
				this->LabelUpMainRightPanel->Text += " | " + Search_Buttons_find_from_reader->Text;
				// Отчищаем PanelSearch от лишнего
				this->Search_Buttons->Dock = System::Windows::Forms::DockStyle::None;
				// Раскрываем панель кнопки
				this->Search_Find_from_reader->Dock = System::Windows::Forms::DockStyle::Fill;

			}

			/// Клик по кнопке "Показать список книг по фамилии автора"

			System::Void LK_admin::Search_Buttons_find_from_authors_Click(System::Object^ sender, System::EventArgs^ e)
			{
				deque<Book> books = get_deque_books();
				// Cоздание невидимой таблицы для DataTable
				{
					DataTable^ table; //Невидимая таблица данных
					DataColumn^ column; //Столбец таблицы
					DataRow^ row; //Строка таблицы

					//Создаем таблицу данных
					table = gcnew DataTable();
					{
						//Названия столбцов
						String^ nameFirstColumn = "Автор(ы)       ";


						//Создание и добавление столбцов 
						column = gcnew DataColumn(nameFirstColumn, String::typeid);
						table->Columns->Add(column);
						deque<string> authors;
						authors.push_back(books[0].get_authors());
						row = table->NewRow();
						row[nameFirstColumn] = gcnew System::String(books[0].get_authors().c_str());
						table->Rows->Add(row);
						//Заполняем все строчки таблицы
						for (size_t i = 1; i < books.size(); i++)
						{	
							row = table->NewRow();
							row[nameFirstColumn] = gcnew System::String(books[i].get_authors().c_str());
							table->Rows->Add(row);		
						}
					}
					//Отображаем таблицу в визуальном компоненте
					Search_Find_from_authors_Grid_Authors->DataSource = table;
				}
				//Задаём текст заголовку
				this->LabelUpMainRightPanel->Text += " | " + Search_Buttons_find_from_authors->Text;
				// Отчищаем PanelSearch от лишнего
				this->Search_Buttons->Dock = System::Windows::Forms::DockStyle::None;
				// Раскрываем панель кнопки
				this->Search_Find_from_authors->Dock = System::Windows::Forms::DockStyle::Fill;

			}
		///	======================================================================================
		///					Search Find from authors panel
		/// ======================================================================================

			/// Клик по кнопке "Выбрать"

			System::Void LK_admin::Search_Find_from_authors_btn_Click(System::Object^ sender, System::EventArgs^ e)
			{
				//Номер выделенной строки
				int index = Search_Find_from_authors_Grid_Authors->CurrentCell->RowIndex;
				//Определим _id в выделенной строке
				String^ Author = Search_Find_from_authors_Grid_Authors->Rows[index]->Cells["Автор(ы)       "]->Value->ToString();
				string StdAuthor = CastStrSystemToStd(Author);
				// Общее количество экземпляров 
				Search_Find_from_authors_Count_All->Text = gcnew System::String(to_string(get_count_books_authors(StdAuthor)).c_str());
				//Общее количества выданных экземпляров: 
				Search_Find_from_authors_Count_taken->Text = gcnew System::String(to_string(get_count_taken_books_authors(StdAuthor)).c_str());
				deque<Book> books = get_deque_author_from_books(StdAuthor);
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
						String^ nameFourthColumn = "Дата создания";
						String^ nameFifthColumn = "Дата выпуска";
						String^ nameSixthColumn = "Cодерж книги";
						String^ nameSeventhColumn = "Кол-во страниц";



						//Создание и добавление столбцов 
						column = gcnew DataColumn(nameFirstColumn, String::typeid);
						table->Columns->Add(column);
						column = gcnew DataColumn(nameSecondColumn, String::typeid);
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
							row[nameFourthColumn] = gcnew System::String((books[i].get_creation_data()).c_str());
							row[nameFifthColumn] = gcnew System::String((books[i].get_release_data()).c_str());
							row[nameSixthColumn] = gcnew System::String((books[i].get_content()).c_str());
							row[nameSeventhColumn] = gcnew System::String(to_string(books[i].get_count_page()).c_str());
							table->Rows->Add(row);
						}
					}
					//Отображаем таблицу в визуальном компоненте
					Search_Find_from_authors_Grid_Search->DataSource = table;
				}

			}

		///	======================================================================================
		///					Search Find from reader panel
		/// ======================================================================================

			/// Клик по кнопке "Выбрать"

			System::Void LK_admin::Search_Find_from_reader_btn_Click(System::Object^ sender, System::EventArgs^ e)
			{
				//Номер выделенной строки
				int index = Search_Find_from_reader_Grid_name->CurrentCell->RowIndex;
				//Определим _id в выделенной строке
				String^ surname = Search_Find_from_reader_Grid_name->Rows[index]->Cells["Фамилия"]->Value->ToString();
				string StdSurname = CastStrSystemToStd(surname);
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
					Search_Find_from_reader_Grid_Select->DataSource = table;
				}

			}
};
