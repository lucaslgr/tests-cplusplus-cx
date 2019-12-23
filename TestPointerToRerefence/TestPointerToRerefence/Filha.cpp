#include "pch.h"
#include "Filha.h"


Filha::Filha()
{
	this->agregado = ref new Agregada(this->p_Valor); //Passando o ponteiro para _valor, que é HERDADO da classe BASE
}


Filha::~Filha()
{
}
