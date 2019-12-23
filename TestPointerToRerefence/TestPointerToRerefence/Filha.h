#pragma once
#include "Base.h"

ref class Filha:Base
{
	public:
		virtual ~Filha();
		property Agregada^ agregado;
	internal:
		Filha();
};

