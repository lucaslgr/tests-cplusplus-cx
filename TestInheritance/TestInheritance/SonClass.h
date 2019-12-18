#pragma once

#include "BaseClass.h"

namespace TestInheritance
{
	public ref class SonClass: public BaseClass
	{
		public:
			virtual ~SonClass();
		internal:
			SonClass();
	};
}