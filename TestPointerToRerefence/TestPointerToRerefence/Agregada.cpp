#include "pch.h"
#include "Agregada.h"


Agregada::Agregada(Platform::String^* ref_strOwner)
{
	//*ref_strOwner = "123456";
	this->p_Str = ref_strOwner; //Making the pointer p_Str point to the address of the ref_strOwner
	*p_Str = "123456"; //Change de value on class Agregada
}


Agregada::~Agregada()
{
}