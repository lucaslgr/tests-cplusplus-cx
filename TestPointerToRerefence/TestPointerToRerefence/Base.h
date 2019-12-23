#pragma once
#include "Agregada.h"

using namespace Platform;

ref class Base
{
public:
	virtual ~Base();

	property String^ Valor
	{
		String ^get()
		{
			return this->_valor;
		}
		void set(String ^new_valor)
		{
			this->_valor = new_valor;
		}
	}

	//Get e Set para pegar o ponteiro que aponta para _valor
	property String^* p_Valor
	{
		String^* get()
		{
			return this->_p_valor;
		}
		void set(String^* new_p_valor)
		{
			this->_p_valor = new_p_valor;
		}
	}
internal:
	Base();
private:
	String^ _valor = ref new String();
	//Ponteiro que aponta para _valor
	String^* _p_valor = &_valor;
};