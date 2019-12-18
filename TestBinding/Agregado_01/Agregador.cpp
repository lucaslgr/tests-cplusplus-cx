#include "pch.h"
#include "Agregador.h"

using namespace Agregado_01;

Agregador::Agregador()
{
	Agregador::MeuTextBox = ref new TextBlock();
	MeuTextBox->Text = "Teste";

	Agregador::TxtLocal = ref new String();
	Agregador::TxtLocal = "A";
	
	Agregador::Texto = ref new Agregado_A();

	b = ref new Windows::UI::Xaml::Data::Binding();
	b->Mode = Windows::UI::Xaml::Data::BindingMode::TwoWay;
	b->Path = ref new PropertyPath("TxtLocal");
	//b->Mode = Windows::UI::Xaml::Data::BindingMode::OneTime;
	//b->Mode = Windows::UI::Xaml::Data::BindingMode::OneWay;
	//b->Path = ref new PropertyPath("TxtLocal");
	//b->Source = this;
	b->Source = this;
	//b->UpdateSourceTrigger = UpdateSourceTrigger::Explicit;//Windows::UI::Xaml::Data::Binding::UpdateSourceTrigger::;
	b->UpdateSourceTrigger = Windows::UI::Xaml::Data::UpdateSourceTrigger::PropertyChanged;
	//b->UpdateSourceTrigger = Windows::UI::Xaml::Data::UpdateSourceTrigger::Explicit;
	//b->UpdateSourceTrigger = Windows::UI::Xaml::Data::UpdateSourceTrigger::LostFocus;
	//b->UpdateSourceTrigger = Windows::UI::Xaml::Data::UpdateSourceTrigger::Default;
	//Agregador::Texto->SetBinding(Texto->TextProperty, b);

	//Agregador::Texto->SetBinding(TextBox::TextProperty, b);
	Windows::UI::Xaml::Data::BindingOperations::SetBinding(Agregador::Texto, TextBox::TextProperty, b);
	//Windows::UI::Xaml::Data::BindingOperations::SetBinding(Agregador::Texto, TextBox::DataContextProperty, b);


	b2->Path = ref new PropertyPath("TxtLocal");
	//b2->Mode = Windows::UI::Xaml::Data::BindingMode::TwoWay;
	//b2->Mode = Windows::UI::Xaml::Data::BindingMode::OneTime;
	//b2->Mode = Windows::UI::Xaml::Data::BindingMode::OneWay;
	//b2->Path = ref new PropertyPath("TxtLocal");
	//b2->Source = this;
	b2->Source = this;
	//b2->UpdateSourceTrigger = UpdateSourceTrigger::Explicit;//Windows::UI::Xaml::Data::Binding::UpdateSourceTrigger::;
	//b2->UpdateSourceTrigger = Windows::UI::Xaml::Data::UpdateSourceTrigger::PropertyChanged;
	//b2->UpdateSourceTrigger = Windows::UI::Xaml::Data::UpdateSourceTrigger::Explicit;
	//b2->UpdateSourceTrigger = Windows::UI::Xaml::Data::UpdateSourceTrigger::LostFocus;
	//b2->UpdateSourceTrigger = Windows::UI::Xaml::Data::UpdateSourceTrigger::Default;
	//Agregador::Texto->SetBinding(MeuTextBox->TextProperty, b2);

	//Agregador::Texto->SetBinding(TextBox::TextProperty, b2);
	Windows::UI::Xaml::Data::BindingOperations::SetBinding(Agregador::MeuTextBox, TextBlock::TextProperty, b2);
	//Windows::UI::Xaml::Data::BindingOperations::SetBinding(Agregador::MeuTextBox, TextBox::DataContextProperty, b2);
}

void Agregador::Ateracao_de_Propriedade(Platform::String ^ nomePropriedade)
{
		Agregador::PropertyChanged(this, ref new Windows::UI::Xaml::Data::PropertyChangedEventArgs(nomePropriedade));
}


Agregador::~Agregador()
{
}
