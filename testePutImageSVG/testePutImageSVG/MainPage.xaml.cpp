//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"
#include "Assets/img/Resistor.g.h"

using namespace testePutImageSVG;

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

void testePutImageSVG::MainPage::AddElement_Click(Platform::Object ^ sender, Windows::UI::Xaml::RoutedEventArgs ^ e)
{
	Button^ b1 = ref new Button();
	b1->Width = 200;
	b1->Height = 100;
	b1->Content = "The image come here";
	//b1->Margin = Thickness(230,100,0,0);

	cnv_AreaTest->Children->Append(b1);
	
}

void testePutImageSVG::MainPage::PutSVGImage_Click(Platform::Object ^ sender, Windows::UI::Xaml::RoutedEventArgs ^ e)
{
	//Image config
	auto img = ref new Image();
	auto bitmap_Image = ref new Windows::UI::Xaml::Media::Imaging::BitmapImage();
	String^ str_urlOfImageLocation = "ms-appx:///Assets/img/resistor.bmp";
	auto uri_img = ref new Windows::Foundation::Uri(str_urlOfImageLocation);
	bitmap_Image->UriSource = uri_img;
	img->Source = bitmap_Image;

	//Adding the image to dynamic button that you placed on Canvas in Step 1
	Button ^pointer_Button = dynamic_cast<Button^>(cnv_AreaTest->Children->GetAt(0)); //The number is 2 because of fixed button and de textblock element that already exists on Canvas
	pointer_Button->HorizontalAlignment = Windows::UI::Xaml::HorizontalAlignment::Stretch;
	pointer_Button->VerticalAlignment = Windows::UI::Xaml::VerticalAlignment::Stretch;
	pointer_Button->Content = img;

	//Testing the quality of image
	pointer_Button->Width = 600;
	pointer_Button->Height = 475;
}
