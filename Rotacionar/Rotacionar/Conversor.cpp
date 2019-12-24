#include "pch.h"
#include "Conversor.h"

double Conversor::S2D(Platform::String ^ Str, double ErroValor)
{
	try
	{
		wchar_t* end_parse;
		return wcstod(Str->Data(), &end_parse);
	}
	catch (const std::exception&)
	{
		return ErroValor;
	}
}
