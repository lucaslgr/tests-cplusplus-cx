#pragma once

namespace testeStaticClass {
	ref class Contador
	{
	public:
		
		property int static count; 
		virtual ~Contador();
		/*static void setORincrementCout();
		static void setORincrementCout(int value);*/
	internal:
		Contador();


		//TODO 4.3 - Quarto teste, solução: utilizar uma fábrica de ativação
		static void static_Construtor(); //Fabrica de ativação dos atributos estáticos da classe
	};
	//TODO 4.0 - Quarto teste, inicializando membro estático com valor
	//int testeStaticClass::Contador::count = 1; 

	//TODO 4.1 - Quarto teste, inicializando membro estático com valor
	//Contador::setORincrementCout();
}
//TODO 4.2 - Quarto teste, inicializando membro estático com valor
//void testeStaticClass::Contador::setORincrementCout();

testeStaticClass::Contador::Contador()
{
}

inline void testeStaticClass::Contador::static_Construtor()
{
	Contador::count = 100;
}


testeStaticClass::Contador::~Contador()
{
}

//inline void testeStaticClass::Contador::setORincrementCout()
//{
//	Contador::count++;
//}
//
//inline void testeStaticClass::Contador::setORincrementCout(int value)
//{
//	Contador::count = value;
//}


