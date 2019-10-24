#pragma once
#include "Contador.h"; //Agregação

using Windows::UI::Popups::MessageDialog;
using namespace Windows::UI::Xaml::Controls;

namespace testeStaticClass {
	ref class Parametro
	{
		public:
			virtual ~Parametro();
			static void change_parametres();	//TODO 1 - Primeiro teste, método estático
			property static int numPara;		//TODO 2 - Segundo teste, membro primitivo estático
			property static Contador ^c1;		//TODO 3 - Terceiro teste, objeto membro estático
			property static Button ^ btn_static;		//TODO 4 - Quarto teste, objeto já definido no XAML como membro estático
		internal:
			Parametro();
			static void AtivationFactory();
	};
}

testeStaticClass::Parametro::Parametro()
{
}

inline void testeStaticClass::Parametro::AtivationFactory()
{
	Parametro::btn_static = ref new Button();
}


testeStaticClass::Parametro::~Parametro()
{
}

inline void testeStaticClass::Parametro::change_parametres()
{
	MessageDialog ^msg = ref new MessageDialog("Teste 1 de método"); //Teste 1
	msg->ShowAsync();
}
