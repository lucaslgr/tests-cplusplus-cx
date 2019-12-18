//
// MainPage.xaml.h
// Declaração da classe MainPage.
//

#pragma once

#include "MainPage.g.h"
#include "Agregador.h"

namespace Agregado_01
{
	/// <summary>
	/// Uma página vazia que pode ser usada isoladamente ou navegada dentro de um Quadro.
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();
		//Agregador^ AGG;
		//property Agregador^ AGG
		//{
		//	Agregador^ get()
		//	{
		//		return _aGG;
		//	}
		//	void set(Agregador^ value)
		//	{
		//		_aGG = value;
		//	}
		//}

	private:
		Agregador^ AGG;
		void Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Button_Click_1(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Button_Click_2(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void TxtConfere_TextChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::TextChangedEventArgs^ e);
	};
}
