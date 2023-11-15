#pragma once
#include <iostream>
#include <vector>
#include <array>
#include "../Data Structures/Graph/Graph.h"
#include "../Data Structures/Tree/Tree.h"

namespace SearchAlgorithms {
#pragma region LinearSearch
	int LinearSearch(std::vector<int>& vect, int needle);

	int LinearSearch(int array[], int size, int needle);


	template <typename T, std::size_t N>
	int LinearSearch(const std::array<T, N>& array, int needle) {
		for (int i = 0; i < array.size(); i++) {
			if (array[i] == needle) {
				return i;
			}
		}
		return -1;
	}

#pragma endregion
#pragma region BinarySearch
	int BinarySearch(int array[], int arraySize, int needle);

	int BinarySearch(std::vector<int>& vect, int needle);

	template<typename T, std::size_t N>
	int BinarySearch(const std::array<T, N>& array, int needle) {
		int low = 0;
		int high = N;
		do {
			int middle_point = floor(low + (high - low) / 2);
			int value = array[middle_point];

			if (value == needle) {
				return middle_point;
			}
			else if (value > needle) {
				high = middle_point;
			}
			else {
				low = middle_point + 1;
			}

		} while (low < high);
		return -1;

	}
#pragma endregion

	int LongestCommonSubsequence(std::string string1, std::string string2, int len_1, int len_2);

}
