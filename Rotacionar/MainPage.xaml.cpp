//
// MainPage.xaml.cpp
// Implementação da classe MainPage.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace RotacionarComponente;

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
using namespace Windows::UI::Core;

// O modelo de item de Página em Branco está documentado em https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x416

MainPage::MainPage()
{
	InitializeComponent();
}


void RotacionarComponente::MainPage::Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	//// criar um objeto com as informações de rotação
	//auto rot = ref new RotateTransform();
	//// Definir o centro da rotação (coloque "0" ou comente para ver a diferença)
	//rot->CenterX = CNV->Width / 2;
	//rot->CenterY = CNV->Height / 2;
	//// Cria um objeto com rotação "0°" e insere no objeto. Isto tem que ser feito para todo objeto canvas
	//// que puder ser rotacionado. Coloque já no construtor do objeto visual
	//RotateTransform^ ang0 = ref new RotateTransform();
	//ang0->Angle = 0;
	//// Insere o objeto de rotação "0°" no "RenderTransform" do CNV. Note que se isto não for feito
	//// uma exceção será gerada se for desejado ler o ângulo inicial
	//CNV->RenderTransform = ang0;
	//// Criar um novo objeto "RotateTransform^" para pegar ângulo atual do CNV.
	//// Note que não seria possível pegar este valor de "ang0" pois ele teria sido usado no construtor
	//RotateTransform^ ang = safe_cast<RotateTransform^>(CNV->RenderTransform);
	//double AnguloAual = ang->Angle;
	//// Opera a rotação do objeto. Se houver uma falha ele coloca no mesmo ângulo
	//rot->Angle = Conversor::S2D(Angulo->Text, AnguloAual);
	//CNV->RenderTransform = rot;
}


void RotacionarComponente::MainPage::Grid_KeyDown(Platform::Object^ sender, Windows::UI::Xaml::Input::KeyRoutedEventArgs^ e)
{
	//auto str = ref new String();
	//str = "aaaaa";
	//e->Handled = true;
	
}


void RotacionarComponente::MainPage::Canvas_KeyDown(Platform::Object^ sender, Windows::UI::Xaml::Input::KeyRoutedEventArgs^ e)
{
	auto ctrlState = CoreWindow::GetForCurrentThread()->GetKeyState(Windows::System::VirtualKey::Control);
	bool isCtrlDown = (ctrlState == CoreVirtualKeyStates::Down) || (ctrlState == (CoreVirtualKeyStates::Down | CoreVirtualKeyStates::Locked));
	if (isCtrlDown && (e->Key == Windows::System::VirtualKey::R))
	{
		// Criar um novo objeto "RotateTransform^" para pegar ângulo atual do CNV.
		// Note que não seria possível pegar este valor de "ang0" pois ele teria sido usado no construtor
		RotateTransform^ ang = safe_cast<RotateTransform^>(CNV->RenderTransform);
		double AnguloAual = ang->Angle;
		// criar um objeto com as informações de rotação
		auto rot = ref new RotateTransform();
		// Definir o centro da rotação (coloque "0" ou comente para ver a diferença)
		rot->CenterX = CNV->Width / 2;
		rot->CenterY = CNV->Height / 2;		// Opera a rotação do objeto. Se houver uma falha ele coloca no mesmo ângulo
		rot->Angle = AnguloAual+45;
		CNV->RenderTransform = rot;
	}
}


void RotacionarComponente::MainPage::Canvas_PointerPressed(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e)
{

}


void RotacionarComponente::MainPage::Page_Loading(Windows::UI::Xaml::FrameworkElement^ sender, Platform::Object^ args)
{
	// Cria um objeto com rotação "0°" e insere no objeto. Isto tem que ser feito para todo objeto canvas
	// que puder ser rotacionado. Coloque já no construtor do objeto visual
	RotateTransform^ ang0 = ref new RotateTransform();
	ang0->Angle = 0;
	// Insere o objeto de rotação "0°" no "RenderTransform" do CNV. Note que se isto não for feito
	// uma exceção será gerada se for desejado ler o ângulo inicial
	CNV->RenderTransform = ang0;
}


void RotacionarComponente::MainPage::Page_Loaded(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	//CNV->IsTapEnabled = true;
	//CNV->AllowFocusOnInteraction = true;
}



void RotacionarComponente::MainPage::CNV2_KeyDown(Platform::Object^ sender, Windows::UI::Xaml::Input::KeyRoutedEventArgs^ e)
{
	//auto str = ref new String();
	//str = "aaaaa";
	//e->Handled = true;
}


void RotacionarComponente::MainPage::CNV2_PointerEntered(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e)
{
	//this->Focus(Windows::UI::Xaml::FocusState::Keyboard);
	//this->Focus(Windows::UI::Xaml::FocusState::Programmatic);
}
