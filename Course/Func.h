#pragma once
//==============================================================
// Подключённые библиотеки
#include <string>
#include "Book.h"
#include "User.h"

//==============================================================
// Подключённые namespace пространства
//==============================================================
using namespace std;
using namespace System::Windows::Forms;
using namespace System;
using namespace System::Data;


// =============================================
// Функция каста System::string в std::string
string CastStrSystemToStd(System::String^ text);

// =============================================
// Функция создания невидимой таблицы для DataTable
System::Data::DataTable get_invisible_table(Book books);
