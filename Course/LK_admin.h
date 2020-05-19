#pragma once

namespace Course {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainForm
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
		/// ќсвободить все используемые ресурсы.
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

	public:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
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
			this->PanelSearch = (gcnew System::Windows::Forms::Panel());
			this->PanelRegUser = (gcnew System::Windows::Forms::Panel());
			this->PanelEditDataUsers = (gcnew System::Windows::Forms::Panel());
			this->PanelDeleteBook = (gcnew System::Windows::Forms::Panel());
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
			this->ButtonMainRightPanel = (gcnew System::Windows::Forms::Panel());
			this->MainPanel->SuspendLayout();
			this->MainLeftPanel->SuspendLayout();
			this->upMainLeftPanel->SuspendLayout();
			this->MainRightPanel->SuspendLayout();
			this->PanelRegNewBook->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->count_page))->BeginInit();
			this->UpMainRightPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// MainPanel
			// 
			this->MainPanel->Controls->Add(this->MainLeftPanel);
			this->MainPanel->Controls->Add(this->MainRightPanel);
			this->MainPanel->FlowDirection = System::Windows::Forms::FlowDirection::BottomUp;
			this->MainPanel->Location = System::Drawing::Point(2, 0);
			this->MainPanel->Name = L"MainPanel";
			this->MainPanel->Size = System::Drawing::Size(981, 766);
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
			this->label1->Text = L"               ћеню \r\nадминистратора";
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
			this->Search->Text = L"Х ѕоиск";
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
			this->RegUser->Text = L"Х –егистраци€ пользовател€";
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
			this->EditDataUsers->Text = L"Х –едактирование личных данных ползовател€";
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
			this->DeleteBook->Text = L"Х ”даление книги из общего списка";
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
			this->EditInfoBook->Text = L"Х –едактирование информации о книге";
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
			this->RegNewBook->Text = L"Х –егистраци€ новой книги";
			this->RegNewBook->UseVisualStyleBackColor = false;
			this->RegNewBook->Click += gcnew System::EventHandler(this, &LK_admin::RegNewBook_Click);
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::Color::NavajoWhite;
			this->exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit->Location = System::Drawing::Point(10, 499);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(180, 50);
			this->exit->TabIndex = 0;
			this->exit->Text = L"¬ыход";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &LK_admin::exit_Click);
			// 
			// MainRightPanel
			// 
			this->MainRightPanel->Controls->Add(this->PanelSearch);
			this->MainRightPanel->Controls->Add(this->PanelRegUser);
			this->MainRightPanel->Controls->Add(this->PanelEditDataUsers);
			this->MainRightPanel->Controls->Add(this->PanelDeleteBook);
			this->MainRightPanel->Controls->Add(this->PanelEditInfoBook);
			this->MainRightPanel->Controls->Add(this->PanelRegNewBook);
			this->MainRightPanel->Controls->Add(this->UpMainRightPanel);
			this->MainRightPanel->Controls->Add(this->ButtonMainRightPanel);
			this->MainRightPanel->Location = System::Drawing::Point(200, 0);
			this->MainRightPanel->Margin = System::Windows::Forms::Padding(0);
			this->MainRightPanel->Name = L"MainRightPanel";
			this->MainRightPanel->Size = System::Drawing::Size(781, 766);
			this->MainRightPanel->TabIndex = 1;
			// 
			// PanelSearch
			// 
			this->PanelSearch->BackColor = System::Drawing::Color::BurlyWood;
			this->PanelSearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PanelSearch->Location = System::Drawing::Point(701, 253);
			this->PanelSearch->Name = L"PanelSearch";
			this->PanelSearch->Size = System::Drawing::Size(200, 100);
			this->PanelSearch->TabIndex = 6;
			// 
			// PanelRegUser
			// 
			this->PanelRegUser->BackColor = System::Drawing::Color::BurlyWood;
			this->PanelRegUser->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PanelRegUser->Location = System::Drawing::Point(701, 147);
			this->PanelRegUser->Name = L"PanelRegUser";
			this->PanelRegUser->Size = System::Drawing::Size(200, 100);
			this->PanelRegUser->TabIndex = 5;
			// 
			// PanelEditDataUsers
			// 
			this->PanelEditDataUsers->BackColor = System::Drawing::Color::BurlyWood;
			this->PanelEditDataUsers->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PanelEditDataUsers->Location = System::Drawing::Point(701, 359);
			this->PanelEditDataUsers->Name = L"PanelEditDataUsers";
			this->PanelEditDataUsers->Size = System::Drawing::Size(200, 100);
			this->PanelEditDataUsers->TabIndex = 4;
			// 
			// PanelDeleteBook
			// 
			this->PanelDeleteBook->BackColor = System::Drawing::Color::BurlyWood;
			this->PanelDeleteBook->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PanelDeleteBook->Location = System::Drawing::Point(701, 41);
			this->PanelDeleteBook->Name = L"PanelDeleteBook";
			this->PanelDeleteBook->Size = System::Drawing::Size(200, 100);
			this->PanelDeleteBook->TabIndex = 3;
			// 
			// PanelEditInfoBook
			// 
			this->PanelEditInfoBook->BackColor = System::Drawing::Color::BurlyWood;
			this->PanelEditInfoBook->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PanelEditInfoBook->Location = System::Drawing::Point(701, 465);
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
			this->PanelRegNewBook->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelRegNewBook->Location = System::Drawing::Point(0, 35);
			this->PanelRegNewBook->Margin = System::Windows::Forms::Padding(0);
			this->PanelRegNewBook->Name = L"PanelRegNewBook";
			this->PanelRegNewBook->Size = System::Drawing::Size(781, 731);
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
			this->RegBtn->Text = L"«арегистрировать";
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
			this->label7->Text = L"¬ведите кол-во страниц книги: ";
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
			this->label6->Text = L"¬ведите дату выпуска книги:";
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
			this->label5->Text = L"¬ведите дату создани€ книги:";
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
			this->label4->Text = L"¬ведите содержание книги: ";
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
			this->label3->Text = L"¬ведите автора книги: ";
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
			this->label2->Text = L"¬ведите название книги: ";
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
			this->AutorsTextBox->Text = L"јвторы книги";
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
			this->NameTextBox->Text = L"Ќазвание книги";
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
			this->UpMainRightPanel->Size = System::Drawing::Size(781, 35);
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
			// ButtonMainRightPanel
			// 
			this->ButtonMainRightPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ButtonMainRightPanel->Location = System::Drawing::Point(0, 0);
			this->ButtonMainRightPanel->Margin = System::Windows::Forms::Padding(0);
			this->ButtonMainRightPanel->Name = L"ButtonMainRightPanel";
			this->ButtonMainRightPanel->Size = System::Drawing::Size(781, 766);
			this->ButtonMainRightPanel->TabIndex = 1;
			// 
			// LK_admin
			// 
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::ButtonMenu;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(984, 561);
			this->Controls->Add(this->MainPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1000, 600);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(1000, 600);
			this->Name = L"LK_admin";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Library: ћеню администратора";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->MainPanel->ResumeLayout(false);
			this->MainLeftPanel->ResumeLayout(false);
			this->upMainLeftPanel->ResumeLayout(false);
			this->upMainLeftPanel->PerformLayout();
			this->MainRightPanel->ResumeLayout(false);
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
};
}
