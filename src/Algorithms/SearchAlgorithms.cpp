#include "SearchAlgorithms.h"

namespace SearchAlgorithms {
#pragma region Linear Search
	int LinearSearch(std::vector<int>& vect, int needle) {
		for (int i = 0; i < vect.size(); i++) {
			if (vect[i] == needle) {
				return i;
			}
		}
		return -1;
	}

	int LinearSearch(int array[], int size, int needle) {
		for (int i = 0; i < size; i++) {
			if (array[i] == needle) {
				return i;
			}
		}
		return -1;
	}

#pragma endregion

#pragma region BinarySearch

	int BinarySearch(int array[], int arraySize, int needle) {
		int low = 0;
		int high = arraySize;
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

	int BinarySearch(std::vector<int>& vect, int needle) {
		int low = 0;
		int high = vect.size();
		do {
			int middle_point = floor(low + (high - low) / 2);
			int value = vect[middle_point];

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


}


