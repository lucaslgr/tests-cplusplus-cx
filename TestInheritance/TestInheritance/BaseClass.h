#pragma once
#include "Agregado.h"

using namespace Windows::UI::Xaml::Controls;

namespace TestInheritance
{
	public ref class BaseClass: Platform::Object
	{
		public:
			virtual ~BaseClass();
			property Agregado ^agr1;
			property Platform::String^ Valor
			{
				Platform::String ^ get()
				{
					return this->_valor;
				}
				void set(Platform::String ^new_str)
				{
					this->_valor = new_str;
				}
			}
		internal:
			BaseClass();
		private:
			Platform::String ^_valor;
	};
}