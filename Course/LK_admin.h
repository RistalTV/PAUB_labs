#pragma once

namespace Course 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class LK_admin : public System::Windows::Forms::Form
	{
		public:
			LK_admin(void)
			{
				InitializeComponent();
				//
				//TODO: добавьте код конструктора
				//
			}
	
		protected:
			/// <summary>
			/// Освободить все используемые ресурсы.
			/// </summary>
			~LK_admin()
			{
				if (components)
				{
					delete components;
				}
			}

		public: System::Windows::Forms::FlowLayoutPanel^ MainPanel;
		public: System::Windows::Forms::Panel^ MainLeftPanel;
		public: System::Windows::Forms::Panel^ upMainLeftPanel;
		public: System::Windows::Forms::Button^ RegNewBook;
		public: System::Windows::Forms::Button^ exit;
		public: System::Windows::Forms::Button^ Search;
		public: System::Windows::Forms::Button^ RegUser;
		public: System::Windows::Forms::Button^ EditDataUsers;
		public: System::Windows::Forms::Button^ DeleteBook;
		public: System::Windows::Forms::Button^ EditInfoBook;
		public: System::Windows::Forms::Panel^ MainRightPanel;
		public: System::Windows::Forms::Panel^ ButtonMainRightPanel;
		public: System::Windows::Forms::Panel^ UpMainRightPanel;
		public: System::Windows::Forms::Label^ label1;
		public: System::Windows::Forms::Label^ LabelUpMainRightPanel;
		public: System::Windows::Forms::Panel^ PanelSearch;
		public: System::Windows::Forms::Panel^ PanelRegUser;
		public: System::Windows::Forms::Panel^ PanelEditDataUsers;
		public: System::Windows::Forms::Panel^ PanelDeleteBook;
		public: System::Windows::Forms::Panel^ PanelEditInfoBook;
		public: System::Windows::Forms::Panel^ PanelRegNewBook;
		public: System::Windows::Forms::TextBox^ NameTextBox;
		public: System::Windows::Forms::TextBox^ ContextTextBox;
		public: System::Windows::Forms::TextBox^ AutorsTextBox;
		public: System::Windows::Forms::Label^ label3;
		public: System::Windows::Forms::Label^ label2;
		public: System::Windows::Forms::NumericUpDown^ count_page;
	
		public: System::Windows::Forms::Label^ label4;
		public: System::Windows::Forms::Label^ label7;
		public: System::Windows::Forms::Label^ label6;
		public: System::Windows::Forms::Label^ label5;
		public: System::Windows::Forms::DateTimePicker^ release_data;
		public: System::Windows::Forms::DateTimePicker^ creation_data;
		public: System::Windows::Forms::Button^ RegBtn;
		private: System::Windows::Forms::Button^ DeleteBookPanel_Btn;
		
		private: System::Windows::Forms::Label^ label8;
		public: System::Windows::Forms::DataGridView^ FullListBookInDB_DataGridView;
		private: System::Windows::Forms::RadioButton^ RegUser_rBtn_reader;
		
		public: System::Windows::Forms::DateTimePicker^ RegUser_birthday;
		
		private: System::Windows::Forms::TextBox^ RegUser_pass;
		private: System::Windows::Forms::TextBox^ RegUser_login;
		private: System::Windows::Forms::TextBox^ RegUser_patronymic;
		private: System::Windows::Forms::TextBox^ RegUser_SurName;
		private: System::Windows::Forms::TextBox^ RegUser_Name;
	
		private: System::Windows::Forms::Label^ label15;
		private: System::Windows::Forms::Label^ label14;
		private: System::Windows::Forms::Label^ label13;
		private: System::Windows::Forms::Label^ label12;
		private: System::Windows::Forms::Label^ label11;
		private: System::Windows::Forms::Label^ label10;
		private: System::Windows::Forms::Label^ label9;
		private: System::Windows::Forms::RadioButton^ RegUser_rBtn_admin;
		public: System::Windows::Forms::Button^ RegUser_regBtn;
	private: System::Windows::Forms::Panel^ EditDataUsers_panel_EditUser;
	private: System::Windows::Forms::Panel^ EditDataUsers_panel_select;
	public: System::Windows::Forms::Button^ EditDataUsers_panel_select_btn;
	private:

	private:
	private: System::Windows::Forms::Label^ label16;
	public: System::Windows::Forms::Button^ EditDataUsers_panel_Edit_btn_save;
	private:
	public:

	public: System::Windows::Forms::DataGridView^ EditDataUsers_panel_select_dataGridView;
	private: System::Windows::Forms::RadioButton^ EditDataUsers_panel_EditUser_admin;
	public:

	private: System::Windows::Forms::RadioButton^ EditDataUsers_panel_EditUser_reader;
	public: System::Windows::Forms::DateTimePicker^ EditDataUsers_panel_EditUser_birthday;
	private:

	private:

	private:

	private:
	public:


	private:
	private: System::Windows::Forms::TextBox^ EditDataUsers_panel_EditUser_pass;
	public:
	private: System::Windows::Forms::TextBox^ EditDataUsers_panel_EditUser_login;
	private: System::Windows::Forms::TextBox^ EditDataUsers_panel_EditUser_patronymic;
	private: System::Windows::Forms::TextBox^ EditDataUsers_panel_EditUser_surname;
	private: System::Windows::Forms::TextBox^ EditDataUsers_panel_EditUser_name;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ EditDataUsers_panel_EditUser_ID;
private: System::Windows::Forms::Label^ label24;

	private:
	public:

	private:

	public:
	public:
			/// <summary>
			/// Обязательная переменная конструктора.
			/// </summary>
			System::ComponentModel::Container ^components;
	
	#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->MainPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->MainLeftPanel = (gcnew System::Windows::Forms::Panel());
			this->upMainLeftPanel = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Search = (gcnew System::Windows::Forms::Button());
			this->RegUser = (gcnew System::Windows::Forms::Button());
			this->EditDataUsers = (gcnew System::Windows::Forms::Button());
			this->DeleteBook = (gcnew System::Windows::Forms::Button());
			this->EditInfoBook = (gcnew System::Windows::Forms::Button());
			this->RegNewBook = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->MainRightPanel = (gcnew System::Windows::Forms::Panel());
			this->ButtonMainRightPanel = (gcnew System::Windows::Forms::Panel());
			this->PanelDeleteBook = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->DeleteBookPanel_Btn = (gcnew System::Windows::Forms::Button());
			this->FullListBookInDB_DataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->PanelRegUser = (gcnew System::Windows::Forms::Panel());
			this->RegUser_regBtn = (gcnew System::Windows::Forms::Button());
			this->RegUser_rBtn_admin = (gcnew System::Windows::Forms::RadioButton());
			this->RegUser_rBtn_reader = (gcnew System::Windows::Forms::RadioButton());
			this->RegUser_birthday = (gcnew System::Windows::Forms::DateTimePicker());
			this->RegUser_pass = (gcnew System::Windows::Forms::TextBox());
			this->RegUser_login = (gcnew System::Windows::Forms::TextBox());
			this->RegUser_patronymic = (gcnew System::Windows::Forms::TextBox());
			this->RegUser_SurName = (gcnew System::Windows::Forms::TextBox());
			this->RegUser_Name = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->PanelEditDataUsers = (gcnew System::Windows::Forms::Panel());
			this->EditDataUsers_panel_select = (gcnew System::Windows::Forms::Panel());
			this->EditDataUsers_panel_select_dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->EditDataUsers_panel_select_btn = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->EditDataUsers_panel_EditUser = (gcnew System::Windows::Forms::Panel());
			this->EditDataUsers_panel_EditUser_ID = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->EditDataUsers_panel_EditUser_admin = (gcnew System::Windows::Forms::RadioButton());
			this->EditDataUsers_panel_EditUser_reader = (gcnew System::Windows::Forms::RadioButton());
			this->EditDataUsers_panel_EditUser_birthday = (gcnew System::Windows::Forms::DateTimePicker());
			this->EditDataUsers_panel_EditUser_pass = (gcnew System::Windows::Forms::TextBox());
			this->EditDataUsers_panel_EditUser_login = (gcnew System::Windows::Forms::TextBox());
			this->EditDataUsers_panel_EditUser_patronymic = (gcnew System::Windows::Forms::TextBox());
			this->EditDataUsers_panel_EditUser_surname = (gcnew System::Windows::Forms::TextBox());
			this->EditDataUsers_panel_EditUser_name = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->EditDataUsers_panel_Edit_btn_save = (gcnew System::Windows::Forms::Button());
			this->PanelSearch = (gcnew System::Windows::Forms::Panel());
			this->PanelEditInfoBook = (gcnew System::Windows::Forms::Panel());
			this->PanelRegNewBook = (gcnew System::Windows::Forms::Panel());
			this->release_data = (gcnew System::Windows::Forms::DateTimePicker());
			this->creation_data = (gcnew System::Windows::Forms::DateTimePicker());
			this->RegBtn = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->count_page = (gcnew System::Windows::Forms::NumericUpDown());
			this->ContextTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AutorsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->NameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->UpMainRightPanel = (gcnew System::Windows::Forms::Panel());
			this->LabelUpMainRightPanel = (gcnew System::Windows::Forms::Label());
			this->MainPanel->SuspendLayout();
			this->MainLeftPanel->SuspendLayout();
			this->upMainLeftPanel->SuspendLayout();
			this->MainRightPanel->SuspendLayout();
			this->ButtonMainRightPanel->SuspendLayout();
			this->PanelDeleteBook->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FullListBookInDB_DataGridView))->BeginInit();
			this->PanelRegUser->SuspendLayout();
			this->PanelEditDataUsers->SuspendLayout();
			this->EditDataUsers_panel_select->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EditDataUsers_panel_select_dataGridView))->BeginInit();
			this->EditDataUsers_panel_EditUser->SuspendLayout();
			this->PanelRegNewBook->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->count_page))->BeginInit();
			this->UpMainRightPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// MainPanel
			// 
			this->MainPanel->Controls->Add(this->MainLeftPanel);
			this->MainPanel->Controls->Add(this->MainRightPanel);
			this->MainPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MainPanel->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->MainPanel->Location = System::Drawing::Point(0, 0);
			this->MainPanel->MaximumSize = System::Drawing::Size(980, 600);
			this->MainPanel->MinimumSize = System::Drawing::Size(980, 600);
			this->MainPanel->Name = L"MainPanel";
			this->MainPanel->Size = System::Drawing::Size(980, 600);
			this->MainPanel->TabIndex = 0;
			// 
			// MainLeftPanel
			// 
			this->MainLeftPanel->BackColor = System::Drawing::Color::Peru;
			this->MainLeftPanel->Controls->Add(this->upMainLeftPanel);
			this->MainLeftPanel->Controls->Add(this->Search);
			this->MainLeftPanel->Controls->Add(this->RegUser);
			this->MainLeftPanel->Controls->Add(this->EditDataUsers);
			this->MainLeftPanel->Controls->Add(this->DeleteBook);
			this->MainLeftPanel->Controls->Add(this->EditInfoBook);
			this->MainLeftPanel->Controls->Add(this->RegNewBook);
			this->MainLeftPanel->Controls->Add(this->exit);
			this->MainLeftPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->MainLeftPanel->Location = System::Drawing::Point(0, 0);
			this->MainLeftPanel->Margin = System::Windows::Forms::Padding(0);
			this->MainLeftPanel->MaximumSize = System::Drawing::Size(200, 766);
			this->MainLeftPanel->MinimumSize = System::Drawing::Size(200, 766);
			this->MainLeftPanel->Name = L"MainLeftPanel";
			this->MainLeftPanel->Size = System::Drawing::Size(200, 766);
			this->MainLeftPanel->TabIndex = 0;
			// 
			// upMainLeftPanel
			// 
			this->upMainLeftPanel->BackColor = System::Drawing::Color::SandyBrown;
			this->upMainLeftPanel->Controls->Add(this->label1);
			this->upMainLeftPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->upMainLeftPanel->Location = System::Drawing::Point(0, 0);
			this->upMainLeftPanel->Name = L"upMainLeftPanel";
			this->upMainLeftPanel->Size = System::Drawing::Size(200, 56);
			this->upMainLeftPanel->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(26, 4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 46);
			this->label1->TabIndex = 2;
			this->label1->Text = L"               Меню \r\nадминистратора";
			// 
			// Search
			// 
			this->Search->BackColor = System::Drawing::Color::NavajoWhite;
			this->Search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Search->Location = System::Drawing::Point(10, 342);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(180, 50);
			this->Search->TabIndex = 0;
			this->Search->Text = L"• Поиск";
			this->Search->UseVisualStyleBackColor = false;
			this->Search->Click += gcnew System::EventHandler(this, &LK_admin::Search_Click);
			// 
			// RegUser
			// 
			this->RegUser->BackColor = System::Drawing::Color::NavajoWhite;
			this->RegUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RegUser->Location = System::Drawing::Point(10, 230);
			this->RegUser->Name = L"RegUser";
			this->RegUser->Size = System::Drawing::Size(180, 50);
			this->RegUser->TabIndex = 0;
			this->RegUser->Text = L"• Регистрация пользователя";
			this->RegUser->UseVisualStyleBackColor = false;
			this->RegUser->Click += gcnew System::EventHandler(this, &LK_admin::RegUser_Click);
			// 
			// EditDataUsers
			// 
			this->EditDataUsers->BackColor = System::Drawing::Color::NavajoWhite;
			this->EditDataUsers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EditDataUsers->Location = System::Drawing::Point(10, 286);
			this->EditDataUsers->Name = L"EditDataUsers";
			this->EditDataUsers->Size = System::Drawing::Size(180, 50);
			this->EditDataUsers->TabIndex = 0;
			this->EditDataUsers->Text = L"• Редактирование личных данных ползователя";
			this->EditDataUsers->UseVisualStyleBackColor = false;
			this->EditDataUsers->Click += gcnew System::EventHandler(this, &LK_admin::EditDataUsers_Click);
			// 
			// DeleteBook
			// 
			this->DeleteBook->BackColor = System::Drawing::Color::NavajoWhite;
			this->DeleteBook->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DeleteBook->Location = System::Drawing::Point(10, 174);
			this->DeleteBook->Name = L"DeleteBook";
			this->DeleteBook->Size = System::Drawing::Size(180, 50);
			this->DeleteBook->TabIndex = 0;
			this->DeleteBook->Text = L"• Удаление книги из общего списка";
			this->DeleteBook->UseVisualStyleBackColor = false;
			this->DeleteBook->Click += gcnew System::EventHandler(this, &LK_admin::DeleteBook_Click);
			// 
			// EditInfoBook
			// 
			this->EditInfoBook->BackColor = System::Drawing::Color::NavajoWhite;
			this->EditInfoBook->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EditInfoBook->Location = System::Drawing::Point(10, 118);
			this->EditInfoBook->Name = L"EditInfoBook";
			this->EditInfoBook->Size = System::Drawing::Size(180, 50);
			this->EditInfoBook->TabIndex = 0;
			this->EditInfoBook->Text = L"• Редактирование информации о книге";
			this->EditInfoBook->UseVisualStyleBackColor = false;
			this->EditInfoBook->Click += gcnew System::EventHandler(this, &LK_admin::EditInfoBook_Click);
			// 
			// RegNewBook
			// 
			this->RegNewBook->BackColor = System::Drawing::Color::NavajoWhite;
			this->RegNewBook->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RegNewBook->Location = System::Drawing::Point(10, 62);
			this->RegNewBook->Name = L"RegNewBook";
			this->RegNewBook->Size = System::Drawing::Size(180, 50);
			this->RegNewBook->TabIndex = 0;
			this->RegNewBook->Text = L"• Регистрация новой книги";
			this->RegNewBook->UseVisualStyleBackColor = false;
			this->RegNewBook->Click += gcnew System::EventHandler(this, &LK_admin::RegNewBook_Click);
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::Color::NavajoWhite;
			this->exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit->Location = System::Drawing::Point(10, 539);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(180, 50);
			this->exit->TabIndex = 0;
			this->exit->Text = L"Выход";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &LK_admin::exit_Click);
			// 
			// MainRightPanel
			// 
			this->MainRightPanel->Controls->Add(this->ButtonMainRightPanel);
			this->MainRightPanel->Location = System::Drawing::Point(200, 0);
			this->MainRightPanel->Margin = System::Windows::Forms::Padding(0);
			this->MainRightPanel->Name = L"MainRightPanel";
			this->MainRightPanel->Size = System::Drawing::Size(781, 766);
			this->MainRightPanel->TabIndex = 1;
			// 
			// ButtonMainRightPanel
			// 
			this->ButtonMainRightPanel->Controls->Add(this->PanelDeleteBook);
			this->ButtonMainRightPanel->Controls->Add(this->PanelRegUser);
			this->ButtonMainRightPanel->Controls->Add(this->PanelEditDataUsers);
			this->ButtonMainRightPanel->Controls->Add(this->PanelSearch);
			this->ButtonMainRightPanel->Controls->Add(this->PanelEditInfoBook);
			this->ButtonMainRightPanel->Controls->Add(this->PanelRegNewBook);
			this->ButtonMainRightPanel->Controls->Add(this->UpMainRightPanel);
			this->ButtonMainRightPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ButtonMainRightPanel->Location = System::Drawing::Point(0, 0);
			this->ButtonMainRightPanel->Margin = System::Windows::Forms::Padding(0);
			this->ButtonMainRightPanel->MaximumSize = System::Drawing::Size(780, 600);
			this->ButtonMainRightPanel->MinimumSize = System::Drawing::Size(780, 600);
			this->ButtonMainRightPanel->Name = L"ButtonMainRightPanel";
			this->ButtonMainRightPanel->Size = System::Drawing::Size(780, 600);
			this->ButtonMainRightPanel->TabIndex = 1;
			// 
			// PanelDeleteBook
			// 
			this->PanelDeleteBook->AutoSize = true;
			this->PanelDeleteBook->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->PanelDeleteBook->BackColor = System::Drawing::Color::BurlyWood;
			this->PanelDeleteBook->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PanelDeleteBook->Controls->Add(this->label8);
			this->PanelDeleteBook->Controls->Add(this->DeleteBookPanel_Btn);
			this->PanelDeleteBook->Controls->Add(this->FullListBookInDB_DataGridView);
			this->PanelDeleteBook->Location = System::Drawing::Point(774, 595);
			this->PanelDeleteBook->MaximumSize = System::Drawing::Size(780, 565);
			this->PanelDeleteBook->Name = L"PanelDeleteBook";
			this->PanelDeleteBook->Size = System::Drawing::Size(2, 518);
			this->PanelDeleteBook->TabIndex = 3;
			// 
			// label8
			// 
			this->label8->Dock = System::Windows::Forms::DockStyle::Top;
			this->label8->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(0, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 30);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Полный список книг присутствующих в базе данных";
			this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// DeleteBookPanel_Btn
			// 
			this->DeleteBookPanel_Btn->BackColor = System::Drawing::Color::NavajoWhite;
			this->DeleteBookPanel_Btn->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->DeleteBookPanel_Btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->DeleteBookPanel_Btn->Location = System::Drawing::Point(0, 454);
			this->DeleteBookPanel_Btn->Name = L"DeleteBookPanel_Btn";
			this->DeleteBookPanel_Btn->Size = System::Drawing::Size(0, 62);
			this->DeleteBookPanel_Btn->TabIndex = 2;
			this->DeleteBookPanel_Btn->Text = L"Удалить элемент";
			this->DeleteBookPanel_Btn->UseVisualStyleBackColor = false;
			this->DeleteBookPanel_Btn->Click += gcnew System::EventHandler(this, &LK_admin::DeleteBookPanel_Btn_Click);
			// 
			// FullListBookInDB_DataGridView
			// 
			this->FullListBookInDB_DataGridView->AllowUserToAddRows = false;
			this->FullListBookInDB_DataGridView->AllowUserToDeleteRows = false;
			this->FullListBookInDB_DataGridView->AllowUserToResizeColumns = false;
			this->FullListBookInDB_DataGridView->AllowUserToResizeRows = false;
			this->FullListBookInDB_DataGridView->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->FullListBookInDB_DataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->FullListBookInDB_DataGridView->BackgroundColor = System::Drawing::Color::NavajoWhite;
			this->FullListBookInDB_DataGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->FullListBookInDB_DataGridView->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			this->FullListBookInDB_DataGridView->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::EnableAlwaysIncludeHeaderText;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->FullListBookInDB_DataGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->FullListBookInDB_DataGridView->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->FullListBookInDB_DataGridView->Location = System::Drawing::Point(5, 22);
			this->FullListBookInDB_DataGridView->Margin = System::Windows::Forms::Padding(20);
			this->FullListBookInDB_DataGridView->MaximumSize = System::Drawing::Size(781, 474);
			this->FullListBookInDB_DataGridView->MinimumSize = System::Drawing::Size(781, 474);
			this->FullListBookInDB_DataGridView->Name = L"FullListBookInDB_DataGridView";
			this->FullListBookInDB_DataGridView->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->FullListBookInDB_DataGridView->Size = System::Drawing::Size(781, 474);
			this->FullListBookInDB_DataGridView->StandardTab = true;
			this->FullListBookInDB_DataGridView->TabIndex = 0;
			// 
			// PanelRegUser
			// 
			this->PanelRegUser->AutoSize = true;
			this->PanelRegUser->BackColor = System::Drawing::Color::BurlyWood;
			this->PanelRegUser->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PanelRegUser->Controls->Add(this->RegUser_regBtn);
			this->PanelRegUser->Controls->Add(this->RegUser_rBtn_admin);
			this->PanelRegUser->Controls->Add(this->RegUser_rBtn_reader);
			this->PanelRegUser->Controls->Add(this->RegUser_birthday);
			this->PanelRegUser->Controls->Add(this->RegUser_pass);
			this->PanelRegUser->Controls->Add(this->RegUser_login);
			this->PanelRegUser->Controls->Add(this->RegUser_patronymic);
			this->PanelRegUser->Controls->Add(this->RegUser_SurName);
			this->PanelRegUser->Controls->Add(this->RegUser_Name);
			this->PanelRegUser->Controls->Add(this->label15);
			this->PanelRegUser->Controls->Add(this->label14);
			this->PanelRegUser->Controls->Add(this->label13);
			this->PanelRegUser->Controls->Add(this->label12);
			this->PanelRegUser->Controls->Add(this->label11);
			this->PanelRegUser->Controls->Add(this->label10);
			this->PanelRegUser->Controls->Add(this->label9);
			this->PanelRegUser->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F));
			this->PanelRegUser->Location = System::Drawing::Point(779, 603);
			this->PanelRegUser->MaximumSize = System::Drawing::Size(780, 565);
			this->PanelRegUser->Name = L"PanelRegUser";
			this->PanelRegUser->Size = System::Drawing::Size(780, 565);
			this->PanelRegUser->TabIndex = 5;
			// 
			// RegUser_regBtn
			// 
			this->RegUser_regBtn->BackColor = System::Drawing::Color::NavajoWhite;
			this->RegUser_regBtn->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->RegUser_regBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RegUser_regBtn->Location = System::Drawing::Point(0, 479);
			this->RegUser_regBtn->Name = L"RegUser_regBtn";
			this->RegUser_regBtn->Size = System::Drawing::Size(778, 84);
			this->RegUser_regBtn->TabIndex = 7;
			this->RegUser_regBtn->Text = L"Зарегистрировать";
			this->RegUser_regBtn->UseVisualStyleBackColor = false;
			this->RegUser_regBtn->Click += gcnew System::EventHandler(this, &LK_admin::RegUser_regBtn_Click);
			// 
			// RegUser_rBtn_admin
			// 
			this->RegUser_rBtn_admin->AutoSize = true;
			this->RegUser_rBtn_admin->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RegUser_rBtn_admin->Location = System::Drawing::Point(529, 405);
			this->RegUser_rBtn_admin->Name = L"RegUser_rBtn_admin";
			this->RegUser_rBtn_admin->Size = System::Drawing::Size(165, 27);
			this->RegUser_rBtn_admin->TabIndex = 6;
			this->RegUser_rBtn_admin->TabStop = true;
			this->RegUser_rBtn_admin->Text = L"Администратор";
			this->RegUser_rBtn_admin->UseVisualStyleBackColor = true;
			// 
			// RegUser_rBtn_reader
			// 
			this->RegUser_rBtn_reader->AutoSize = true;
			this->RegUser_rBtn_reader->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RegUser_rBtn_reader->Location = System::Drawing::Point(414, 405);
			this->RegUser_rBtn_reader->Name = L"RegUser_rBtn_reader";
			this->RegUser_rBtn_reader->Size = System::Drawing::Size(108, 27);
			this->RegUser_rBtn_reader->TabIndex = 6;
			this->RegUser_rBtn_reader->TabStop = true;
			this->RegUser_rBtn_reader->Text = L"Читатель";
			this->RegUser_rBtn_reader->UseVisualStyleBackColor = true;
			// 
			// RegUser_birthday
			// 
			this->RegUser_birthday->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->RegUser_birthday->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->RegUser_birthday->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->RegUser_birthday->Location = System::Drawing::Point(351, 367);
			this->RegUser_birthday->Name = L"RegUser_birthday";
			this->RegUser_birthday->ShowUpDown = true;
			this->RegUser_birthday->Size = System::Drawing::Size(126, 29);
			this->RegUser_birthday->TabIndex = 5;
			// 
			// RegUser_pass
			// 
			this->RegUser_pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->RegUser_pass->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->RegUser_pass->Location = System::Drawing::Point(135, 327);
			this->RegUser_pass->Name = L"RegUser_pass";
			this->RegUser_pass->Size = System::Drawing::Size(510, 29);
			this->RegUser_pass->TabIndex = 1;
			this->RegUser_pass->Text = L"Пароль пользователя";
			this->RegUser_pass->Enter += gcnew System::EventHandler(this, &LK_admin::RegUser_pass_Enter);
			this->RegUser_pass->Leave += gcnew System::EventHandler(this, &LK_admin::RegUser_pass_Leave);
			// 
			// RegUser_login
			// 
			this->RegUser_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->RegUser_login->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->RegUser_login->Location = System::Drawing::Point(135, 249);
			this->RegUser_login->Name = L"RegUser_login";
			this->RegUser_login->Size = System::Drawing::Size(510, 29);
			this->RegUser_login->TabIndex = 1;
			this->RegUser_login->Text = L"Логин пользователя";
			this->RegUser_login->Enter += gcnew System::EventHandler(this, &LK_admin::RegUser_login_Enter);
			this->RegUser_login->Leave += gcnew System::EventHandler(this, &LK_admin::RegUser_login_Leave);
			// 
			// RegUser_patronymic
			// 
			this->RegUser_patronymic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->RegUser_patronymic->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->RegUser_patronymic->Location = System::Drawing::Point(135, 181);
			this->RegUser_patronymic->Name = L"RegUser_patronymic";
			this->RegUser_patronymic->Size = System::Drawing::Size(510, 29);
			this->RegUser_patronymic->TabIndex = 1;
			this->RegUser_patronymic->Text = L"Отчество пользователя";
			this->RegUser_patronymic->Enter += gcnew System::EventHandler(this, &LK_admin::RegUser_patronymic_Enter);
			this->RegUser_patronymic->Leave += gcnew System::EventHandler(this, &LK_admin::RegUser_patronymic_Leave);
			// 
			// RegUser_SurName
			// 
			this->RegUser_SurName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->RegUser_SurName->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->RegUser_SurName->Location = System::Drawing::Point(135, 115);
			this->RegUser_SurName->Name = L"RegUser_SurName";
			this->RegUser_SurName->Size = System::Drawing::Size(510, 29);
			this->RegUser_SurName->TabIndex = 1;
			this->RegUser_SurName->Text = L"Фамилия пользователя";
			this->RegUser_SurName->Enter += gcnew System::EventHandler(this, &LK_admin::RegUser_SurName_Enter);
			this->RegUser_SurName->Leave += gcnew System::EventHandler(this, &LK_admin::RegUser_SurName_Leave);
			// 
			// RegUser_Name
			// 
			this->RegUser_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->RegUser_Name->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->RegUser_Name->Location = System::Drawing::Point(135, 47);
			this->RegUser_Name->Name = L"RegUser_Name";
			this->RegUser_Name->Size = System::Drawing::Size(510, 29);
			this->RegUser_Name->TabIndex = 1;
			this->RegUser_Name->Text = L"Имя пользователя";
			this->RegUser_Name->Enter += gcnew System::EventHandler(this, &LK_admin::RegUser_Name_Enter);
			this->RegUser_Name->Leave += gcnew System::EventHandler(this, &LK_admin::RegUser_Name_Leave);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F));
			this->label15->Location = System::Drawing::Point(9, 399);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(399, 33);
			this->label15->TabIndex = 0;
			this->label15->Text = L"Нажмите на роль пользователя:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F));
			this->label14->Location = System::Drawing::Point(9, 363);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(336, 33);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Выберите день рождения:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F));
			this->label13->Location = System::Drawing::Point(277, 284);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(216, 33);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Введите пароль:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F));
			this->label12->Location = System::Drawing::Point(288, 214);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(205, 33);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Введите логин:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F));
			this->label11->Location = System::Drawing::Point(280, 146);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(242, 33);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Введите отчество:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F));
			this->label10->Location = System::Drawing::Point(272, 79);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(250, 33);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Введите фамилию:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(303, 12);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(180, 33);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Введите имя:";
			// 
			// PanelEditDataUsers
			// 
			this->PanelEditDataUsers->BackColor = System::Drawing::Color::BurlyWood;
			this->PanelEditDataUsers->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PanelEditDataUsers->Controls->Add(this->EditDataUsers_panel_select);
			this->PanelEditDataUsers->Controls->Add(this->EditDataUsers_panel_EditUser);
			this->PanelEditDataUsers->Location = System::Drawing::Point(11, 41);
			this->PanelEditDataUsers->MaximumSize = System::Drawing::Size(780, 565);
			this->PanelEditDataUsers->Name = L"PanelEditDataUsers";
			this->PanelEditDataUsers->Size = System::Drawing::Size(0, 0);
			this->PanelEditDataUsers->TabIndex = 4;
			// 
			// EditDataUsers_panel_select
			// 
			this->EditDataUsers_panel_select->BackColor = System::Drawing::Color::BurlyWood;
			this->EditDataUsers_panel_select->Controls->Add(this->EditDataUsers_panel_select_dataGridView);
			this->EditDataUsers_panel_select->Controls->Add(this->EditDataUsers_panel_select_btn);
			this->EditDataUsers_panel_select->Controls->Add(this->label16);
			this->EditDataUsers_panel_select->Location = System::Drawing::Point(772, 561);
			this->EditDataUsers_panel_select->MaximumSize = System::Drawing::Size(780, 565);
			this->EditDataUsers_panel_select->Name = L"EditDataUsers_panel_select";
			this->EditDataUsers_panel_select->Size = System::Drawing::Size(778, 563);
			this->EditDataUsers_panel_select->TabIndex = 9;
			// 
			// EditDataUsers_panel_select_dataGridView
			// 
			this->EditDataUsers_panel_select_dataGridView->AllowUserToAddRows = false;
			this->EditDataUsers_panel_select_dataGridView->AllowUserToDeleteRows = false;
			this->EditDataUsers_panel_select_dataGridView->AllowUserToResizeColumns = false;
			this->EditDataUsers_panel_select_dataGridView->AllowUserToResizeRows = false;
			this->EditDataUsers_panel_select_dataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->EditDataUsers_panel_select_dataGridView->BackgroundColor = System::Drawing::Color::NavajoWhite;
			this->EditDataUsers_panel_select_dataGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->EditDataUsers_panel_select_dataGridView->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			this->EditDataUsers_panel_select_dataGridView->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::EnableAlwaysIncludeHeaderText;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->EditDataUsers_panel_select_dataGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->EditDataUsers_panel_select_dataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->EditDataUsers_panel_select_dataGridView->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->EditDataUsers_panel_select_dataGridView->Location = System::Drawing::Point(0, 26);
			this->EditDataUsers_panel_select_dataGridView->Margin = System::Windows::Forms::Padding(20);
			this->EditDataUsers_panel_select_dataGridView->MaximumSize = System::Drawing::Size(781, 474);
			this->EditDataUsers_panel_select_dataGridView->MinimumSize = System::Drawing::Size(781, 374);
			this->EditDataUsers_panel_select_dataGridView->Name = L"EditDataUsers_panel_select_dataGridView";
			this->EditDataUsers_panel_select_dataGridView->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->EditDataUsers_panel_select_dataGridView->Size = System::Drawing::Size(781, 400);
			this->EditDataUsers_panel_select_dataGridView->StandardTab = true;
			this->EditDataUsers_panel_select_dataGridView->TabIndex = 10;
			// 
			// EditDataUsers_panel_select_btn
			// 
			this->EditDataUsers_panel_select_btn->BackColor = System::Drawing::Color::NavajoWhite;
			this->EditDataUsers_panel_select_btn->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->EditDataUsers_panel_select_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->EditDataUsers_panel_select_btn->Location = System::Drawing::Point(0, 426);
			this->EditDataUsers_panel_select_btn->Name = L"EditDataUsers_panel_select_btn";
			this->EditDataUsers_panel_select_btn->Size = System::Drawing::Size(778, 137);
			this->EditDataUsers_panel_select_btn->TabIndex = 9;
			this->EditDataUsers_panel_select_btn->Text = L"Выбрать";
			this->EditDataUsers_panel_select_btn->UseVisualStyleBackColor = false;
			this->EditDataUsers_panel_select_btn->Click += gcnew System::EventHandler(this, &LK_admin::EditDataUsers_btn_select_Click);
			// 
			// label16
			// 
			this->label16->Dock = System::Windows::Forms::DockStyle::Top;
			this->label16->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(0, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(778, 26);
			this->label16->TabIndex = 1;
			this->label16->Text = L"Выберите пользователя, у которого нужно изменить данные";
			this->label16->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// EditDataUsers_panel_EditUser
			// 
			this->EditDataUsers_panel_EditUser->Controls->Add(this->EditDataUsers_panel_EditUser_ID);
			this->EditDataUsers_panel_EditUser->Controls->Add(this->label24);
			this->EditDataUsers_panel_EditUser->Controls->Add(this->EditDataUsers_panel_EditUser_admin);
			this->EditDataUsers_panel_EditUser->Controls->Add(this->EditDataUsers_panel_EditUser_reader);
			this->EditDataUsers_panel_EditUser->Controls->Add(this->EditDataUsers_panel_EditUser_birthday);
			this->EditDataUsers_panel_EditUser->Controls->Add(this->EditDataUsers_panel_EditUser_pass);
			this->EditDataUsers_panel_EditUser->Controls->Add(this->EditDataUsers_panel_EditUser_login);
			this->EditDataUsers_panel_EditUser->Controls->Add(this->EditDataUsers_panel_EditUser_patronymic);
			this->EditDataUsers_panel_EditUser->Controls->Add(this->EditDataUsers_panel_EditUser_surname);
			this->EditDataUsers_panel_EditUser->Controls->Add(this->EditDataUsers_panel_EditUser_name);
			this->EditDataUsers_panel_EditUser->Controls->Add(this->label17);
			this->EditDataUsers_panel_EditUser->Controls->Add(this->label18);
			this->EditDataUsers_panel_EditUser->Controls->Add(this->label19);
			this->EditDataUsers_panel_EditUser->Controls->Add(this->label20);
			this->EditDataUsers_panel_EditUser->Controls->Add(this->label21);
			this->EditDataUsers_panel_EditUser->Controls->Add(this->label22);
			this->EditDataUsers_panel_EditUser->Controls->Add(this->label23);
			this->EditDataUsers_panel_EditUser->Controls->Add(this->EditDataUsers_panel_Edit_btn_save);
			this->EditDataUsers_panel_EditUser->Location = System::Drawing::Point(0, 0);
			this->EditDataUsers_panel_EditUser->MaximumSize = System::Drawing::Size(780, 565);
			this->EditDataUsers_panel_EditUser->Name = L"EditDataUsers_panel_EditUser";
			this->EditDataUsers_panel_EditUser->Size = System::Drawing::Size(0, 0);
			this->EditDataUsers_panel_EditUser->TabIndex = 9;
			// 
			// EditDataUsers_panel_EditUser_ID
			// 
			this->EditDataUsers_panel_EditUser_ID->AutoSize = true;
			this->EditDataUsers_panel_EditUser_ID->Location = System::Drawing::Point(102, 14);
			this->EditDataUsers_panel_EditUser_ID->Name = L"EditDataUsers_panel_EditUser_ID";
			this->EditDataUsers_panel_EditUser_ID->Size = System::Drawing::Size(0, 13);
			this->EditDataUsers_panel_EditUser_ID->TabIndex = 27;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(4, 13);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(100, 13);
			this->label24->TabIndex = 26;
			this->label24->Text = L"Пользователя ID: ";
			// 
			// EditDataUsers_panel_EditUser_admin
			// 
			this->EditDataUsers_panel_EditUser_admin->AutoSize = true;
			this->EditDataUsers_panel_EditUser_admin->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->EditDataUsers_panel_EditUser_admin->Location = System::Drawing::Point(565, 421);
			this->EditDataUsers_panel_EditUser_admin->Name = L"EditDataUsers_panel_EditUser_admin";
			this->EditDataUsers_panel_EditUser_admin->Size = System::Drawing::Size(165, 27);
			this->EditDataUsers_panel_EditUser_admin->TabIndex = 24;
			this->EditDataUsers_panel_EditUser_admin->TabStop = true;
			this->EditDataUsers_panel_EditUser_admin->Text = L"Администратор";
			this->EditDataUsers_panel_EditUser_admin->UseVisualStyleBackColor = true;
			// 
			// EditDataUsers_panel_EditUser_reader
			// 
			this->EditDataUsers_panel_EditUser_reader->AutoSize = true;
			this->EditDataUsers_panel_EditUser_reader->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->EditDataUsers_panel_EditUser_reader->Location = System::Drawing::Point(450, 421);
			this->EditDataUsers_panel_EditUser_reader->Name = L"EditDataUsers_panel_EditUser_reader";
			this->EditDataUsers_panel_EditUser_reader->Size = System::Drawing::Size(108, 27);
			this->EditDataUsers_panel_EditUser_reader->TabIndex = 25;
			this->EditDataUsers_panel_EditUser_reader->TabStop = true;
			this->EditDataUsers_panel_EditUser_reader->Text = L"Читатель";
			this->EditDataUsers_panel_EditUser_reader->UseVisualStyleBackColor = true;
			// 
			// EditDataUsers_panel_EditUser_birthday
			// 
			this->EditDataUsers_panel_EditUser_birthday->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->EditDataUsers_panel_EditUser_birthday->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->EditDataUsers_panel_EditUser_birthday->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->EditDataUsers_panel_EditUser_birthday->Location = System::Drawing::Point(387, 383);
			this->EditDataUsers_panel_EditUser_birthday->Name = L"EditDataUsers_panel_EditUser_birthday";
			this->EditDataUsers_panel_EditUser_birthday->ShowUpDown = true;
			this->EditDataUsers_panel_EditUser_birthday->Size = System::Drawing::Size(126, 29);
			this->EditDataUsers_panel_EditUser_birthday->TabIndex = 23;
			// 
			// EditDataUsers_panel_EditUser_pass
			// 
			this->EditDataUsers_panel_EditUser_pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->EditDataUsers_panel_EditUser_pass->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->EditDataUsers_panel_EditUser_pass->Location = System::Drawing::Point(171, 343);
			this->EditDataUsers_panel_EditUser_pass->Name = L"EditDataUsers_panel_EditUser_pass";
			this->EditDataUsers_panel_EditUser_pass->Size = System::Drawing::Size(510, 29);
			this->EditDataUsers_panel_EditUser_pass->TabIndex = 18;
			this->EditDataUsers_panel_EditUser_pass->Text = L"Пароль пользователя";
			this->EditDataUsers_panel_EditUser_pass->Enter += gcnew System::EventHandler(this, &LK_admin::EditDataUsers_panel_EditUser_pass_Enter);
			this->EditDataUsers_panel_EditUser_pass->Leave += gcnew System::EventHandler(this, &LK_admin::EditDataUsers_panel_EditUser_pass_Leave);
			// 
			// EditDataUsers_panel_EditUser_login
			// 
			this->EditDataUsers_panel_EditUser_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->EditDataUsers_panel_EditUser_login->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->EditDataUsers_panel_EditUser_login->Location = System::Drawing::Point(171, 265);
			this->EditDataUsers_panel_EditUser_login->Name = L"EditDataUsers_panel_EditUser_login";
			this->EditDataUsers_panel_EditUser_login->Size = System::Drawing::Size(510, 29);
			this->EditDataUsers_panel_EditUser_login->TabIndex = 19;
			this->EditDataUsers_panel_EditUser_login->Text = L"Логин пользователя";
			this->EditDataUsers_panel_EditUser_login->Enter += gcnew System::EventHandler(this, &LK_admin::EditDataUsers_panel_EditUser_login_Enter);
			this->EditDataUsers_panel_EditUser_login->Leave += gcnew System::EventHandler(this, &LK_admin::EditDataUsers_panel_EditUser_login_Leave);
			// 
			// EditDataUsers_panel_EditUser_patronymic
			// 
			this->EditDataUsers_panel_EditUser_patronymic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->EditDataUsers_panel_EditUser_patronymic->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->EditDataUsers_panel_EditUser_patronymic->Location = System::Drawing::Point(171, 197);
			this->EditDataUsers_panel_EditUser_patronymic->Name = L"EditDataUsers_panel_EditUser_patronymic";
			this->EditDataUsers_panel_EditUser_patronymic->Size = System::Drawing::Size(510, 29);
			this->EditDataUsers_panel_EditUser_patronymic->TabIndex = 20;
			this->EditDataUsers_panel_EditUser_patronymic->Text = L"Отчество пользователя";
			this->EditDataUsers_panel_EditUser_patronymic->Enter += gcnew System::EventHandler(this, &LK_admin::EditDataUsers_panel_EditUser_patronymic_Enter);
			this->EditDataUsers_panel_EditUser_patronymic->Leave += gcnew System::EventHandler(this, &LK_admin::EditDataUsers_panel_EditUser_patronymic_Leave);
			// 
			// EditDataUsers_panel_EditUser_surname
			// 
			this->EditDataUsers_panel_EditUser_surname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->EditDataUsers_panel_EditUser_surname->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->EditDataUsers_panel_EditUser_surname->Location = System::Drawing::Point(171, 131);
			this->EditDataUsers_panel_EditUser_surname->Name = L"EditDataUsers_panel_EditUser_surname";
			this->EditDataUsers_panel_EditUser_surname->Size = System::Drawing::Size(510, 29);
			this->EditDataUsers_panel_EditUser_surname->TabIndex = 21;
			this->EditDataUsers_panel_EditUser_surname->Text = L"Фамилия пользователя";
			this->EditDataUsers_panel_EditUser_surname->Enter += gcnew System::EventHandler(this, &LK_admin::EditDataUsers_panel_EditUser_surname_Enter);
			this->EditDataUsers_panel_EditUser_surname->Leave += gcnew System::EventHandler(this, &LK_admin::EditDataUsers_panel_EditUser_surname_Leave);
			// 
			// EditDataUsers_panel_EditUser_name
			// 
			this->EditDataUsers_panel_EditUser_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->EditDataUsers_panel_EditUser_name->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->EditDataUsers_panel_EditUser_name->Location = System::Drawing::Point(171, 63);
			this->EditDataUsers_panel_EditUser_name->Name = L"EditDataUsers_panel_EditUser_name";
			this->EditDataUsers_panel_EditUser_name->Size = System::Drawing::Size(510, 29);
			this->EditDataUsers_panel_EditUser_name->TabIndex = 22;
			this->EditDataUsers_panel_EditUser_name->Text = L"Имя пользователя";
			this->EditDataUsers_panel_EditUser_name->Enter += gcnew System::EventHandler(this, &LK_admin::EditDataUsers_panel_EditUser_name_Enter);
			this->EditDataUsers_panel_EditUser_name->Leave += gcnew System::EventHandler(this, &LK_admin::EditDataUsers_panel_EditUser_name_Leave);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F));
			this->label17->Location = System::Drawing::Point(169, 421);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(246, 33);
			this->label17->TabIndex = 11;
			this->label17->Text = L"Роль пользователя:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F));
			this->label18->Location = System::Drawing::Point(169, 382);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(212, 33);
			this->label18->TabIndex = 12;
			this->label18->Text = L"День рождения:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F));
			this->label19->Location = System::Drawing::Point(381, 300);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(110, 33);
			this->label19->TabIndex = 13;
			this->label19->Text = L"Пароль:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F));
			this->label20->Location = System::Drawing::Point(382, 229);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(100, 33);
			this->label20->TabIndex = 14;
			this->label20->Text = L"Логин:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F));
			this->label21->Location = System::Drawing::Point(372, 163);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(138, 33);
			this->label21->TabIndex = 15;
			this->label21->Text = L"Отчество:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F));
			this->label22->Location = System::Drawing::Point(366, 95);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(135, 33);
			this->label22->TabIndex = 16;
			this->label22->Text = L"Фамилия:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(398, 27);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(74, 33);
			this->label23->TabIndex = 17;
			this->label23->Text = L"Имя:";
			// 
			// EditDataUsers_panel_Edit_btn_save
			// 
			this->EditDataUsers_panel_Edit_btn_save->BackColor = System::Drawing::Color::NavajoWhite;
			this->EditDataUsers_panel_Edit_btn_save->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->EditDataUsers_panel_Edit_btn_save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->EditDataUsers_panel_Edit_btn_save->Location = System::Drawing::Point(0, -84);
			this->EditDataUsers_panel_Edit_btn_save->Name = L"EditDataUsers_panel_Edit_btn_save";
			this->EditDataUsers_panel_Edit_btn_save->Size = System::Drawing::Size(0, 84);
			this->EditDataUsers_panel_Edit_btn_save->TabIndex = 10;
			this->EditDataUsers_panel_Edit_btn_save->Text = L"Сохранить";
			this->EditDataUsers_panel_Edit_btn_save->UseVisualStyleBackColor = false;
			this->EditDataUsers_panel_Edit_btn_save->Click += gcnew System::EventHandler(this, &LK_admin::EditDataUsers_panel_Edit_btn_save_Click);
			// 
			// PanelSearch
			// 
			this->PanelSearch->BackColor = System::Drawing::Color::BurlyWood;
			this->PanelSearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PanelSearch->Location = System::Drawing::Point(701, 253);
			this->PanelSearch->MaximumSize = System::Drawing::Size(780, 565);
			this->PanelSearch->Name = L"PanelSearch";
			this->PanelSearch->Size = System::Drawing::Size(200, 100);
			this->PanelSearch->TabIndex = 6;
			// 
			// PanelEditInfoBook
			// 
			this->PanelEditInfoBook->BackColor = System::Drawing::Color::BurlyWood;
			this->PanelEditInfoBook->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PanelEditInfoBook->Location = System::Drawing::Point(701, 465);
			this->PanelEditInfoBook->MaximumSize = System::Drawing::Size(780, 565);
			this->PanelEditInfoBook->Name = L"PanelEditInfoBook";
			this->PanelEditInfoBook->Size = System::Drawing::Size(200, 100);
			this->PanelEditInfoBook->TabIndex = 2;
			// 
			// PanelRegNewBook
			// 
			this->PanelRegNewBook->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->PanelRegNewBook->BackColor = System::Drawing::Color::BurlyWood;
			this->PanelRegNewBook->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PanelRegNewBook->Controls->Add(this->release_data);
			this->PanelRegNewBook->Controls->Add(this->creation_data);
			this->PanelRegNewBook->Controls->Add(this->RegBtn);
			this->PanelRegNewBook->Controls->Add(this->label7);
			this->PanelRegNewBook->Controls->Add(this->label6);
			this->PanelRegNewBook->Controls->Add(this->label5);
			this->PanelRegNewBook->Controls->Add(this->label4);
			this->PanelRegNewBook->Controls->Add(this->label3);
			this->PanelRegNewBook->Controls->Add(this->label2);
			this->PanelRegNewBook->Controls->Add(this->count_page);
			this->PanelRegNewBook->Controls->Add(this->ContextTextBox);
			this->PanelRegNewBook->Controls->Add(this->AutorsTextBox);
			this->PanelRegNewBook->Controls->Add(this->NameTextBox);
			this->PanelRegNewBook->Location = System::Drawing::Point(0, 35);
			this->PanelRegNewBook->Margin = System::Windows::Forms::Padding(0);
			this->PanelRegNewBook->Name = L"PanelRegNewBook";
			this->PanelRegNewBook->Size = System::Drawing::Size(0, 0);
			this->PanelRegNewBook->TabIndex = 1;
			// 
			// release_data
			// 
			this->release_data->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->release_data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->release_data->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->release_data->Location = System::Drawing::Point(367, 214);
			this->release_data->Name = L"release_data";
			this->release_data->ShowUpDown = true;
			this->release_data->Size = System::Drawing::Size(126, 29);
			this->release_data->TabIndex = 4;
			// 
			// creation_data
			// 
			this->creation_data->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->creation_data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->creation_data->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->creation_data->Location = System::Drawing::Point(367, 177);
			this->creation_data->Name = L"creation_data";
			this->creation_data->ShowUpDown = true;
			this->creation_data->Size = System::Drawing::Size(126, 29);
			this->creation_data->TabIndex = 3;
			// 
			// RegBtn
			// 
			this->RegBtn->BackColor = System::Drawing::Color::NavajoWhite;
			this->RegBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RegBtn->Location = System::Drawing::Point(10, 429);
			this->RegBtn->Name = L"RegBtn";
			this->RegBtn->Size = System::Drawing::Size(759, 84);
			this->RegBtn->TabIndex = 6;
			this->RegBtn->Text = L"Зарегистрировать";
			this->RegBtn->UseVisualStyleBackColor = false;
			this->RegBtn->Click += gcnew System::EventHandler(this, &LK_admin::RegBtn_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(5, 251);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(356, 25);
			this->label7->TabIndex = 99;
			this->label7->Text = L"Введите кол-во страниц книги: ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(5, 217);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(329, 25);
			this->label6->TabIndex = 99;
			this->label6->Text = L"Введите дату выпуска книги:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(5, 181);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(340, 25);
			this->label5->TabIndex = 99;
			this->label5->Text = L"Введите дату создания книги:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(5, 122);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(322, 25);
			this->label4->TabIndex = 99;
			this->label4->Text = L"Введите содержание книги: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(5, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(265, 25);
			this->label3->TabIndex = 99;
			this->label3->Text = L"Введите автора книги: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(5, 5);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(292, 25);
			this->label2->TabIndex = 99;
			this->label2->Text = L"Введите название книги: ";
			// 
			// count_page
			// 
			this->count_page->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->count_page->Location = System::Drawing::Point(367, 250);
			this->count_page->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->count_page->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->count_page->Name = L"count_page";
			this->count_page->Size = System::Drawing::Size(126, 29);
			this->count_page->TabIndex = 5;
			this->count_page->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// ContextTextBox
			// 
			this->ContextTextBox->BackColor = System::Drawing::SystemColors::Window;
			this->ContextTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ContextTextBox->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ContextTextBox->Location = System::Drawing::Point(10, 146);
			this->ContextTextBox->MaxLength = 100;
			this->ContextTextBox->Name = L"ContextTextBox";
			this->ContextTextBox->Size = System::Drawing::Size(759, 29);
			this->ContextTextBox->TabIndex = 2;
			this->ContextTextBox->Text = L"Cодержание книги";
			this->ContextTextBox->Enter += gcnew System::EventHandler(this, &LK_admin::ContextTextBox_Enter);
			this->ContextTextBox->Leave += gcnew System::EventHandler(this, &LK_admin::ContextTextBox_Leave);
			// 
			// AutorsTextBox
			// 
			this->AutorsTextBox->BackColor = System::Drawing::SystemColors::Window;
			this->AutorsTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AutorsTextBox->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->AutorsTextBox->Location = System::Drawing::Point(10, 90);
			this->AutorsTextBox->MaxLength = 100;
			this->AutorsTextBox->Name = L"AutorsTextBox";
			this->AutorsTextBox->Size = System::Drawing::Size(759, 29);
			this->AutorsTextBox->TabIndex = 1;
			this->AutorsTextBox->Text = L"Авторы книги";
			this->AutorsTextBox->Enter += gcnew System::EventHandler(this, &LK_admin::AutorsTextBox_Enter);
			this->AutorsTextBox->Leave += gcnew System::EventHandler(this, &LK_admin::AutorsTextBox_Leave);
			// 
			// NameTextBox
			// 
			this->NameTextBox->BackColor = System::Drawing::SystemColors::Window;
			this->NameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NameTextBox->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->NameTextBox->Location = System::Drawing::Point(10, 38);
			this->NameTextBox->MaxLength = 100;
			this->NameTextBox->Name = L"NameTextBox";
			this->NameTextBox->Size = System::Drawing::Size(759, 29);
			this->NameTextBox->TabIndex = 0;
			this->NameTextBox->Text = L"Название книги";
			this->NameTextBox->Enter += gcnew System::EventHandler(this, &LK_admin::NameTextBox_Enter);
			this->NameTextBox->Leave += gcnew System::EventHandler(this, &LK_admin::NameTextBox_Leave);
			// 
			// UpMainRightPanel
			// 
			this->UpMainRightPanel->BackColor = System::Drawing::Color::Tan;
			this->UpMainRightPanel->Controls->Add(this->LabelUpMainRightPanel);
			this->UpMainRightPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->UpMainRightPanel->Location = System::Drawing::Point(0, 0);
			this->UpMainRightPanel->Name = L"UpMainRightPanel";
			this->UpMainRightPanel->Size = System::Drawing::Size(780, 35);
			this->UpMainRightPanel->TabIndex = 0;
			// 
			// LabelUpMainRightPanel
			// 
			this->LabelUpMainRightPanel->AutoSize = true;
			this->LabelUpMainRightPanel->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LabelUpMainRightPanel->Location = System::Drawing::Point(4, 4);
			this->LabelUpMainRightPanel->Name = L"LabelUpMainRightPanel";
			this->LabelUpMainRightPanel->Size = System::Drawing::Size(0, 20);
			this->LabelUpMainRightPanel->TabIndex = 0;
			// 
			// LK_admin
			// 
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::ButtonMenu;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(982, 601);
			this->Controls->Add(this->MainPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(998, 640);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(998, 640);
			this->Name = L"LK_admin";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Library: Меню администратора";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->MainPanel->ResumeLayout(false);
			this->MainLeftPanel->ResumeLayout(false);
			this->upMainLeftPanel->ResumeLayout(false);
			this->upMainLeftPanel->PerformLayout();
			this->MainRightPanel->ResumeLayout(false);
			this->ButtonMainRightPanel->ResumeLayout(false);
			this->ButtonMainRightPanel->PerformLayout();
			this->PanelDeleteBook->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FullListBookInDB_DataGridView))->EndInit();
			this->PanelRegUser->ResumeLayout(false);
			this->PanelRegUser->PerformLayout();
			this->PanelEditDataUsers->ResumeLayout(false);
			this->EditDataUsers_panel_select->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EditDataUsers_panel_select_dataGridView))->EndInit();
			this->EditDataUsers_panel_EditUser->ResumeLayout(false);
			this->EditDataUsers_panel_EditUser->PerformLayout();
			this->PanelRegNewBook->ResumeLayout(false);
			this->PanelRegNewBook->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->count_page))->EndInit();
			this->UpMainRightPanel->ResumeLayout(false);
			this->UpMainRightPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		public:
			System::Void exit_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void RegNewBook_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void EditInfoBook_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void DeleteBook_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void EditDataUsers_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void RegUser_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void Search_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void NameTextBox_Enter(System::Object^ sender, System::EventArgs^ e);
			System::Void AutorsTextBox_Enter(System::Object^ sender, System::EventArgs^ e);
			System::Void ContextTextBox_Enter(System::Object^ sender, System::EventArgs^ e);
			System::Void NameTextBox_Leave(System::Object^ sender, System::EventArgs^ e);
			System::Void AutorsTextBox_Leave(System::Object^ sender, System::EventArgs^ e);
			System::Void ContextTextBox_Leave(System::Object^ sender, System::EventArgs^ e);
			System::Void RegBtn_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void DeleteBookPanel_Btn_Click(System::Object^ sender, System::EventArgs^ e);
	
			System::Void RegUser_Name_Leave(System::Object^ sender, System::EventArgs^ e);
			System::Void RegUser_SurName_Leave(System::Object^ sender, System::EventArgs^ e);
			System::Void RegUser_patronymic_Leave(System::Object^ sender, System::EventArgs^ e);
			System::Void RegUser_login_Leave(System::Object^ sender, System::EventArgs^ e);
			System::Void RegUser_pass_Leave(System::Object^ sender, System::EventArgs^ e);
			System::Void RegUser_Name_Enter(System::Object^ sender, System::EventArgs^ e);
			System::Void RegUser_SurName_Enter(System::Object^ sender, System::EventArgs^ e);
			System::Void RegUser_patronymic_Enter(System::Object^ sender, System::EventArgs^ e);
			System::Void RegUser_login_Enter(System::Object^ sender, System::EventArgs^ e);
			System::Void RegUser_pass_Enter(System::Object^ sender, System::EventArgs^ e);
			System::Void RegUser_regBtn_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void EditDataUsers_btn_select_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void EditDataUsers_panel_Edit_btn_save_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void EditDataUsers_panel_EditUser_name_Enter(System::Object^ sender, System::EventArgs^ e);
			System::Void EditDataUsers_panel_EditUser_login_Enter(System::Object^ sender, System::EventArgs^ e);
			System::Void EditDataUsers_panel_EditUser_surname_Enter(System::Object^ sender, System::EventArgs^ e);
			System::Void EditDataUsers_panel_EditUser_pass_Enter(System::Object^ sender, System::EventArgs^ e);
			System::Void EditDataUsers_panel_EditUser_patronymic_Enter(System::Object^ sender, System::EventArgs^ e);
			System::Void EditDataUsers_panel_EditUser_name_Leave(System::Object^ sender, System::EventArgs^ e);
			System::Void EditDataUsers_panel_EditUser_surname_Leave(System::Object^ sender, System::EventArgs^ e);
			System::Void EditDataUsers_panel_EditUser_patronymic_Leave(System::Object^ sender, System::EventArgs^ e);
			System::Void EditDataUsers_panel_EditUser_login_Leave(System::Object^ sender, System::EventArgs^ e);
			System::Void EditDataUsers_panel_EditUser_pass_Leave(System::Object^ sender, System::EventArgs^ e);
};
}
