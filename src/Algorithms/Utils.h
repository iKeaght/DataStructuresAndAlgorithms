#pragma once
#include <iostream>
namespace Utils {
	void PrintArray(int array[], int size);

	template <typename T>
	void Swap(T& x, T& y) {
		T temp = x;
		x = y;
		y = temp;
	}

}