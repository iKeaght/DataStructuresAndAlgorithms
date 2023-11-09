#pragma once
#include <iostream>
#include <vector>
#include <array>

namespace SearchAlgorithms {
#pragma region LinearSearch

	/**
	* @brief Algorithm that performs linear search
	* @param array - a given array
	* @param arraySize - the array size
	* @return index of valuefound or -1 if not found
	*/

	int LinearSearch(std::vector<int>& vect, int needle);
	int LinearSearch(int array[], int size, int needle);
	
	
	template <std::size_t N>
	int LinearSearch(const std::array<int, N>& array, int needle) {
		for (int i = 0; i < array.size(); i++) {
			if (array[i] == needle) {
				return i;
			}
		}
		return -1;
	}

#pragma endregion
	bool BinarySearch(int array[], int arraySize, int needle);

}
