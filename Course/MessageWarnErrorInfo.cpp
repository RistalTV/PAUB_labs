#include "MessageWarnErrorInfo.h"

void Msg(String^ String1)
{
	MessageBox::Show(String1);
}

void Msg(String^ String1, String^ String2)
{
	MessageBox::Show(String1, String2);
}

void Msg(String^ String1, String^ String2, MessageBoxButtons MessageBoxButtons)
{
	MessageBox::Show(String1, String2, MessageBoxButtons);
}

void Msg(String^ String1, String^ String2, MessageBoxButtons MessageBoxButtons, MessageBoxIcon MessageBoxIcon)
{
	MessageBox::Show(String1, String2, MessageBoxButtons, MessageBoxIcon);
}

void Msg(String^ String1, String^ String2, MessageBoxButtons MessageBoxButtons, MessageBoxIcon MessageBoxIcon, MessageBoxDefaultButton MessageBoxDefaultButton)
{
	MessageBox::Show(String1, String2, MessageBoxButtons, MessageBoxIcon, MessageBoxDefaultButton);
}

void Msg(String^ String1, String^ String2, MessageBoxButtons MessageBoxButtons, MessageBoxIcon MessageBoxIcon, MessageBoxDefaultButton MessageBoxDefaultButton, MessageBoxOptions MessageBoxOptions)
{
	MessageBox::Show(String1, String2, MessageBoxButtons, MessageBoxIcon, MessageBoxDefaultButton, MessageBoxOptions);
}

void Msg(String^ String1, String^ String2, MessageBoxButtons MessageBoxButtons, MessageBoxIcon MessageBoxIcon, MessageBoxDefaultButton MessageBoxDefaultButton, MessageBoxOptions MessageBoxOptions, String^ String3)
{
	MessageBox::Show(String1, String2, MessageBoxButtons, MessageBoxIcon, MessageBoxDefaultButton, MessageBoxOptions, String3);
}

void Msg(String^ String1, String^ String2, MessageBoxButtons MessageBoxButtons, MessageBoxIcon MessageBoxIcon, MessageBoxDefaultButton MessageBoxDefaultButton, MessageBoxOptions MessageBoxOptions, String^ String3, HelpNavigator HelpNavigator)
{
	MessageBox::Show(String1, String2, MessageBoxButtons, MessageBoxIcon, MessageBoxDefaultButton, MessageBoxOptions, String3, HelpNavigator);
}

void Msg(String^ String1, String^ String2, MessageBoxButtons MessageBoxButtons, MessageBoxIcon MessageBoxIcon, MessageBoxDefaultButton MessageBoxDefaultButton, MessageBoxOptions MessageBoxOptions, String^ String3, HelpNavigator HelpNavigator, Object^ Object)
{
	MessageBox::Show(String1, String2, MessageBoxButtons, MessageBoxIcon, MessageBoxDefaultButton, MessageBoxOptions, String3, HelpNavigator, Object);
}
