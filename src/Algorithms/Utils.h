#pragma once
#include <iostream>
#include <array>
#include <vector>
namespace Utils {

	template<typename T, size_t size>
	void PrintArray(const T(&array)[size]) {
		for (int i = 0; i < size; i++)
		{
			std::cout << array[i] << "  ";
		}
		std::cout << "\n";
	};

	template<typename T, size_t size>
	void PrintArraySTD(const std::array<T, size> &array) {
		for (int i = 0; i < size; i++)
		{
			std::cout << array[i] << "  ";
		}
		std::cout << "\n";
	};

	template<typename T>
	void PrintVector(const std::vector<T>& vect) {
		for (int i = 0; i < vect.size(); i++) {
			std::cout << vect[i] << " ";
		}
		std::cout << "\n";
	}

	template <typename T>
	void Swap(T& x, T& y) {
		T temp = x;
		x = y;
		y = temp;
	}

}