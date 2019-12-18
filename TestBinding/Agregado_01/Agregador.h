#pragma once
#include "Agregado_A.h"

//using namespace  Windows::UI::Xaml::Data;

namespace Agregado_01
{

	//[Windows::UI::Xaml::Data::Bindable]
	//[Windows::UI::Xaml::Data::BindableAttribute]
	//[Bindable]
	[Windows::Foundation::Metadata::WebHostHidden]
	[Windows::UI::Xaml::Data::Bindable]
	public ref class Agregador sealed : Windows::UI::Xaml::Data::INotifyPropertyChanged
	{
	public:
		virtual ~Agregador();
		virtual event Windows::UI::Xaml::Data::PropertyChangedEventHandler^ PropertyChanged;
		property String^ TxtLocal
		{
			String^ get()
			{
				return _txtLocal;
			}
			void set(String^ value)
			{
				_txtLocal = value;
				Ateracao_de_Propriedade("TxtLocal");
			}
		}
		property Agregado_A^ Texto
		{
			Agregado_A^ get()
			{
				return _texto;
			}
			void set(Agregado_A^ value)
			{
				_texto = value;
				Ateracao_de_Propriedade("Texto");
			}
		}
		property TextBlock^ MeuTextBox
		{
			TextBlock^ get()
			{
				return _meuTextBox;
			}
			void set(TextBlock^ value)
			{
				_meuTextBox = value;
				Ateracao_de_Propriedade("MeuTextBox");
			}
		}

	internal:
		Agregador();

	private:
		Agregado_A^ _texto;
		String^ _txtLocal;
		TextBlock^ _meuTextBox;
		Windows::UI::Xaml::Data::Binding^ b;
		Windows::UI::Xaml::Data::Binding^ b2 = ref new Windows::UI::Xaml::Data::Binding();

	protected:
		void Ateracao_de_Propriedade(Platform::String^ nomePropriedade);
	};
}
