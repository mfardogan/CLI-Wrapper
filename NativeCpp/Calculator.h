#pragma once
#include <iostream>
#include "IDestroyable.h"

namespace NativeCpp
{
	class Calculator :virtual public IDestroyable {
	public:
		//Constructor:
		Calculator() {
			std::cout << "Native C++ Calculator object created on memory!\n";
		}

		//Destructor
		~Calculator() {
			std::cout << "Native C++ Calculator object destroyed on memory!\n";
		}

		///This function sums two number.
		double Sum(double x, double y) {
			return x + y;
		}

		void Destroy() {
			Calculator* obj = this;
			if (obj != nullptr)
			{
				delete obj;
			}
		}
	};
}
