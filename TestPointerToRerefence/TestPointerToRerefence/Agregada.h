#pragma once
using namespace Platform;

ref class Agregada
{
public:
	virtual ~Agregada();
internal:
	Agregada(Platform::String^* p_strOwner);
private:
	Platform::String ^* p_Str;// = nullptr;
};