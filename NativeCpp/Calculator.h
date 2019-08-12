#pragma once
#include <iostream>
namespace NativeCpp
{
	class Calculator {
	public:
		//Constructor:
		Calculator() {
			std::cout << "Native C++ Calculator object is created on memory!\n";
		}

		//Destructor
		~Calculator() {
			std::cout << "Native C++ Calculator object is destroyed on memory!\n";
		}

		///This function sums two number.
		double Sum(double x, double y) {
			return x + y;
		}
	};
}
