#pragma once
//==============================================================
// Подключённые библиотеки
#include <string>

//==============================================================
// Подключённые namespace пространства
//==============================================================
using namespace std;
using namespace System::Windows::Forms;

// =============================================
// Функция каста System::string в std::string
string CastStrSystemToStd(System::String^ text);
