#include "pch.h"
#include "Base.h"


Base::Base()
{
	this->_valor = "123";
	this->agregado = ref new Agregada(this->_valor);
}


Base::~Base()
{
}
