//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace GenerateGraphic;

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

void GenerateGraphic::MainPage::Draw_Sin_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	this->addChart();
}

void GenerateGraphic::MainPage::addChart()
{
	// Draw sine chart:
	auto polyline = ref new Windows::UI::Xaml::Shapes::Polyline();
	polyline->Stroke = ref new Windows::UI::Xaml::Media::SolidColorBrush(Windows::UI::Colors::Black);

	for (int i = 0; i < 70; i++)
	{
		double x = i / 5.0;
		double y = sin(x);
		polyline->Points->Append( this->CorrespondingPoint(Point(x, y)));
		//polyline.Points.Add(CorrespondingPoint(new Point(x, y)));
	}
	canvas->Children->Append(polyline);

	// Draw cosine chart:
	polyline = ref new Windows::UI::Xaml::Shapes::Polyline();
	for (int i = 0; i < 70; i++)
	{
		double x = i / 5.0;
		double y = cos(x);
		polyline->Points->Append(Point(x, y));
	}
	canvas->Children->Append(polyline);

}

Point GenerateGraphic::MainPage::CorrespondingPoint(Point pt)
{
	Point point;

	double x = (pt.X - xmin) * canvas->Width/(xmax - xmin);
	double y = canvas->Height - (pt.Y - ymin) * canvas->Height / (ymax - ymin);

	point.X = x;
	point.Y = y;

	return point;
}
