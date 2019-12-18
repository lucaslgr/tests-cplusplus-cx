//
// MainPage.xaml.cpp
// Implementação da classe MainPage.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace Agregado_01;

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

// O modelo de item de Página em Branco está documentado em https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x416

MainPage::MainPage()
{
	InitializeComponent();
}


void Agregado_01::MainPage::Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	AGG = ref new Agregador();
}


void Agregado_01::MainPage::Button_Click_1(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	GrdP->Children->Append(AGG->Texto);
	AGG->Texto->HorizontalAlignment = Windows::UI::Xaml::HorizontalAlignment::Left;
	AGG->Texto->VerticalAlignment = Windows::UI::Xaml::VerticalAlignment::Top;
	AGG->Texto->Height = 30;
	AGG->Texto->Width = 300;

	GrdP->Children->Append(AGG->MeuTextBox);
	AGG->MeuTextBox->HorizontalAlignment = Windows::UI::Xaml::HorizontalAlignment::Left;
	AGG->MeuTextBox->VerticalAlignment = Windows::UI::Xaml::VerticalAlignment::Top;
	AGG->MeuTextBox->Margin = Thickness(0, 50, 0, 0);
	AGG->MeuTextBox->Height = 30;
	AGG->MeuTextBox->Width = 300;
}


void Agregado_01::MainPage::Button_Click_2(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	TxtConfere->Text = AGG->TxtLocal;
}


void Agregado_01::MainPage::TxtConfere_TextChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::TextChangedEventArgs^ e)
{
	AGG->TxtLocal = TxtConfere->Text;
}
