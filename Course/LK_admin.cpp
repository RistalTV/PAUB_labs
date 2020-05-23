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
	
	System::Void LK_admin::exit_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->LoginMainPanel->Visible = true;
		this->AdminMainPanel->Visible = false;
		this->Text = "Library: Меню авторизации";


	}

};