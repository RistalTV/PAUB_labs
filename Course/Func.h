#pragma once
//==============================================================
// ������������ ����������
#include <string>
#include "Book.h"
#include "User.h"

//==============================================================
// ������������ namespace ������������
//==============================================================
using namespace std;
using namespace System::Windows::Forms;
using namespace System;
using namespace System::Data;


// =============================================
// ������� ����� System::string � std::string
string CastStrSystemToStd(System::String^ text);

// =============================================
// ������� ����� char � int
int castCharToInt(char c);