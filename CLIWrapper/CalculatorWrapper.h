#pragma once
#include "..//NativeCpp/Calculator.h"
#include "..//NativeCpp/IDestroyable.h"
//include to Native C++ library in CLR class library project.

namespace CLIWrapper {
	public ref class CalculatorWrapper
	{
	private:
		NativeCpp::Calculator* obj;
	public:
		CalculatorWrapper() {
			obj = new NativeCpp::Calculator();
			//Create new object from NativeCpp::Calculator class on constructor.
		}

		~CalculatorWrapper() {
			//Delete class object at Wrapper's destructor.
			NativeCpp::IDestroyable* destroyable = obj;
			destroyable->Destroy();
		}

		!CalculatorWrapper() {
			//Delete class object at Wrapper's destructor.
			NativeCpp::IDestroyable* destroyable = obj;
			destroyable->Destroy();
		}
#pragma region Math Function
		double Sum(double x, double y) {
			return obj->Sum(x, y);
			//Return native C++ class object's Sum function's value.
		}
#pragma endregion
	};

}
