//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

using namespace Windows::Foundation; //Para usar o point

#include "MainPage.g.h"
#include <math.h>

namespace GenerateGraphic
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();

		void Draw_Sin_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	private:
		double xmin = 0;
		double xmax = 6.5;
		double ymin = -1.1;
		double ymax = 1.1;

		void addChart();
		Point CorrespondingPoint(Point p);
	};
}
