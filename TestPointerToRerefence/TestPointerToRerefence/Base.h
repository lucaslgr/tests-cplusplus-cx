#pragma once
#include "Agregada.h"

ref class Base
{
public:
	virtual ~Base();
	/*property Platform::String ^str_privada;
	property Platform::String ^str_public;*/
	property Agregada^ agregado;
	property Platform::String^ Valor
	{
		Platform::String ^get()
		{
			return this->_valor;
		}
		void set(Platform::String ^new_valor)
		{
			this->_valor = new_valor;
		}
	}
internal:
	Base();
private:
	Platform::String^ _valor = ref new Platform::String();
};