#pragma once

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;

namespace Agregado_01
{
	public ref class Agregado_A sealed :
		public TextBox
	{
	public:
		virtual ~Agregado_A();

	internal:
		Agregado_A();
	};

}