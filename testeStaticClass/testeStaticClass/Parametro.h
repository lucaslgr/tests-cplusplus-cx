#pragma once
#include "Contador.h"; //Agregação

using Windows::UI::Popups::MessageDialog;

namespace testeStaticClass {
	ref class Parametro
	{
		public:
			virtual ~Parametro();
			static void change_parametres(); //TODO 1 - Primeiro teste, método estático
			property static int numPara;	//TODO 2 - Segundo teste, membro primitivo estático
			property static Contador ^c1; //TODO 3 - Terceiro teste, objeto membro estático
		internal:
			Parametro();
}
	};

testeStaticClass::Parametro::Parametro()
{
}


testeStaticClass::Parametro::~Parametro()
{
}

inline void testeStaticClass::Parametro::change_parametres()
{
	MessageDialog ^msg = ref new MessageDialog("Teste 1 de método"); //Teste 1
	msg->ShowAsync();
}
