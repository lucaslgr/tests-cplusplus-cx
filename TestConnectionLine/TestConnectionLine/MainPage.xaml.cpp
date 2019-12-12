//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace TestConnectionLine;

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


void TestConnectionLine::MainPage::Create_Line_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	//<CONNECTIO BTN1 BETWEEN BTN2>
	Line ^conection1_2 = ref new Line();
	
	conection1_2->Stroke = ref new Windows::UI::Xaml::Media::SolidColorBrush(Windows::UI::Colors::DarkGray);
	conection1_2->Fill = ref new Windows::UI::Xaml::Media::SolidColorBrush(Windows::UI::Colors::Black);

	//StartPoint
	conection1_2->X1 = btn_1->ActualWidth + btn_1->Margin.Left;
	conection1_2->Y1 = btn_1->ActualHeight + btn_1->Margin.Top;


	//EndPoint
	conection1_2->X2 = btn_2->ActualWidth +  btn_2->Margin.Left;
	conection1_2->Y2 = btn_2->ActualHeight + btn_2->Margin.Top;

	Main_Canvas->Children->Append(conection1_2);


	//<CONNECTIO BTN1 BETWEEN BTN3>
	Line ^conection1_3 = ref new Line();

	conection1_3->Stroke = ref new Windows::UI::Xaml::Media::SolidColorBrush(Windows::UI::Colors::DarkGray);
	conection1_3->Fill = ref new Windows::UI::Xaml::Media::SolidColorBrush(Windows::UI::Colors::Black);

	//StartPoint
	conection1_3->X1 = btn_1->ActualWidth + btn_1->Margin.Left;
	conection1_3->Y1 = btn_1->ActualHeight + btn_1->Margin.Top;

	//EndPoint
	conection1_3->X2 = btn_3->ActualWidth + btn_3->Margin.Left;
	conection1_3->Y2 = btn_3->ActualHeight + btn_3->Margin.Top;

	Main_Canvas->Children->Append(conection1_3);

	//<CONNECTIO BTN1 BETWEEN BTN4>
	Line ^conection1_4 = ref new Line();

	conection1_4->Stroke = ref new Windows::UI::Xaml::Media::SolidColorBrush(Windows::UI::Colors::DarkGray);
	conection1_4->Fill = ref new Windows::UI::Xaml::Media::SolidColorBrush(Windows::UI::Colors::Black);

	//StartPoint
	conection1_4->X1 = btn_1->ActualWidth + btn_1->Margin.Left;
	conection1_4->Y1 = btn_1->ActualHeight + btn_1->Margin.Top;

	//EndPoint
	conection1_4->X2 = btn_4->ActualWidth + btn_4->Margin.Left;
	conection1_4->Y2 = btn_4->ActualHeight + btn_4->Margin.Top;

	Main_Canvas->Children->Append(conection1_4);
}
