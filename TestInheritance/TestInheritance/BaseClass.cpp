#include "pch.h"
#include "BaseClass.h"


TestInheritance::BaseClass::BaseClass()
{
	this->Valor = ref new Platform::String();
	this->Valor = "123";
	this->agr1 = ref new Agregado(this->valor);
}


TestInheritance::BaseClass::~BaseClass()
{
}
