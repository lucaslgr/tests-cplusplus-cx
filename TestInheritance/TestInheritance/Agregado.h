#pragma once

namespace TestInheritance
{
	ref class Agregado
	{
	public:
		
		virtual ~Agregado();
	internal:
		Agregado(Platform::String ^& str);
	private:
		Platform::String^% pointer_Str;
	};
}