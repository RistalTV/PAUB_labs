#pragma once
// =============================================
// Подключённые библиотеки
//#include ""
#include <Windows.h>

//==============================================================
// Подключённые namespace пространства
//==============================================================
//using namespace Course;
using namespace std;
using namespace System;
using namespace System::Windows::Forms;

void Msg(String^ String1);
void Msg(String^ String1, String^ String2);
void Msg(String^ String1, String^ String2, MessageBoxButtons MessageBoxButtons);
void Msg(String^ String1, String^ String2, MessageBoxButtons MessageBoxButtons, MessageBoxIcon MessageBoxIcon);
void Msg(String^ String1, String^ String2, MessageBoxButtons MessageBoxButtons, MessageBoxIcon MessageBoxIcon, MessageBoxDefaultButton MessageBoxDefaultButton);
void Msg(String^ String1, String^ String2, MessageBoxButtons MessageBoxButtons, MessageBoxIcon MessageBoxIcon, MessageBoxDefaultButton MessageBoxDefaultButton, MessageBoxOptions MessageBoxOptions);
void Msg(String^ String1, String^ String2, MessageBoxButtons MessageBoxButtons, MessageBoxIcon MessageBoxIcon, MessageBoxDefaultButton MessageBoxDefaultButton, MessageBoxOptions MessageBoxOptions, String^ String3);
void Msg(String^ String1, String^ String2, MessageBoxButtons MessageBoxButtons, MessageBoxIcon MessageBoxIcon, MessageBoxDefaultButton MessageBoxDefaultButton, MessageBoxOptions MessageBoxOptions, String^ String3, HelpNavigator HelpNavigator);
void Msg(String^ String1, String^ String2, MessageBoxButtons MessageBoxButtons, MessageBoxIcon MessageBoxIcon, MessageBoxDefaultButton MessageBoxDefaultButton, MessageBoxOptions MessageBoxOptions, String^ String3, HelpNavigator HelpNavigator, Object^ Object);