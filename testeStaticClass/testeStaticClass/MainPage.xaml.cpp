//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"
#include "Parametro.h"

using namespace testeStaticClass;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
	InitializeComponent();
}


void testeStaticClass::MainPage::Teste1_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	//Teste 1
	Parametro::change_parametres(); 
}

void testeStaticClass::MainPage::Teste2_Click(Platform::Object ^ sender, Windows::UI::Xaml::RoutedEventArgs ^ e)
{
	//Teste 2
	Parametro::numPara++;
	MessageDialog ^msgTeste2 = ref new MessageDialog("Teste 2 - membro primitivo numPara: " + Parametro::numPara); //Teste 2
	msgTeste2->ShowAsync();
}

void testeStaticClass::MainPage::AtivationClass_Click(Platform::Object ^ sender, Windows::UI::Xaml::RoutedEventArgs ^ e)
{
	//Ativando a classe Contador com valor inicial 100 pela fábrica de ativicação de memebros estáticos
	Contador::static_Construtor();//Ativando os membros estáticos da classe Contador
}

void testeStaticClass::MainPage::Teste3_Click(Platform::Object ^ sender, Windows::UI::Xaml::RoutedEventArgs ^ e)
{
	Parametro::c1->count++;
	MessageDialog ^msgTeste3 = ref new MessageDialog("Teste 3 - objeto Contador : " + Parametro::c1->count); //Teste 3
	msgTeste3->ShowAsync();
}

void testeStaticClass::MainPage::Teste4_Click(Platform::Object ^ sender, Windows::UI::Xaml::RoutedEventArgs ^ e)
{
	Parametro::AtivationFactory(); //Fábrica de ativação da classe Parametro
	Parametro::btn_static->Height = 50;
	Parametro::btn_static->Content = "Botão Estático da Classe Parametro";
	Area_Teste4->Children->Append(Parametro::btn_static);
}

