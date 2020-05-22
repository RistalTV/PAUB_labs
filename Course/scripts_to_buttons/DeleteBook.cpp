#include "stafx.h"

namespace Course {
	/// ================================================================================================
	///						Клики
	/// ================================================================================================

		/// Клик в левой панели

		System::Void LK_admin::DeleteBook_Click(System::Object^ sender, System::EventArgs^ e)
	{
		deque<Book> books = get_deque_books();
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
				String^ nameFirstColumn = "ID";
				String^ nameSecondColumn = "Название книги";
				String^ nameThirdColumn = "Автор(ы)";
				String^ nameFourthColumn = "Дата создания";
				String^ nameFifthColumn = "Дата выпуска";
				String^ nameSixthColumn = "Cодержание книги";
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
			FullListBookInDB_DataGridView->DataSource = table;
		}
		// Отчищаем ButtonMainRightPanel от лишнего
		this->PanelEditDataUsers->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelEditInfoBook->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelRegUser->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelSearch->Dock = System::Windows::Forms::DockStyle::None;
		this->PanelRegNewBook->Dock = System::Windows::Forms::DockStyle::None;

		// Раскрываем панель кнопки
		this->PanelDeleteBook->Dock = System::Windows::Forms::DockStyle::Fill;
		this->FullListBookInDB_DataGridView->Location = System::Drawing::Point(-3, 34);
	}
		
		/// Клик в главной панели

		System::Void LK_admin::DeleteBookPanel_Btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//Номер выделенной строки
		int index = FullListBookInDB_DataGridView->CurrentCell->RowIndex;
		//Определим _id в выделенной строке
		String^ _id = FullListBookInDB_DataGridView->Rows[index]->Cells["ID"]->Value->ToString();

		Msg(_id, "Инфо", MessageBoxButtons::OK, MessageBoxIcon::Information);
		// Удаляем из бд
		deque<Book> Books = get_deque_books();
		for (Book book : Books)
		{
			if (book.get_id_book() == atoi(CastStrSystemToStd(_id).c_str())) {
				switch (delete_from_books(book))
				{
				case 0:
				{
					Msg("Удаление успешно выполнено!", "Инфо", MessageBoxButtons::OK, MessageBoxIcon::Information);
					break;
				}
				case 1:
				{
					Msg("Удаление успешно не выполнено!", "Инфо", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					break;
				}
				case 2:
				{
					Msg("Не хватает данных!", "Инфо", MessageBoxButtons::OK, MessageBoxIcon::Information);
					break;
				}
				}
			}
		}
		// Перерендэрим Грид
		Books.clear();
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
				String^ nameFirstColumn = "ID";
				String^ nameSecondColumn = "Название книги";
				String^ nameThirdColumn = "Автор(ы)";
				String^ nameFourthColumn = "Дата создания";
				String^ nameFifthColumn = "Дата выпуска";
				String^ nameSixthColumn = "Cодержание книги";
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
			FullListBookInDB_DataGridView->DataSource = table;
		}

	}

};
