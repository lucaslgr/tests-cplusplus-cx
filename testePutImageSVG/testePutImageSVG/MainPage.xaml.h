//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"

namespace testePutImageSVG
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();

	private:
		//Add a button into canvas in MainPage
		void AddElement_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs ^e);
		void PutSVGImage_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs ^e);
	};
}
