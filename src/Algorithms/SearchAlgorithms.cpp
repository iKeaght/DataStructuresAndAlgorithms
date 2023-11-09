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

	bool BinarySearch(int array[], int arraySize, int needle) {
		return true;
	}
}


