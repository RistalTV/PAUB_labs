#include "Func.h"

std::string CastStrSystemToStd(System::String^ text)
{
	std::string text2;
	for (int i = 0; i < text->Length; i++)
		text2 += text[i];
	return text2;
}

