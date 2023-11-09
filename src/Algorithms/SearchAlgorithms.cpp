#include "SearchAlgorithms.h"
namespace SearchAlgorithms {

	int LinearSearch(std::vector<int>& vect, int needle) {
		for (int i = 0; i < vect.size(); i++) {
			if (vect[i] == needle) {
				return i;
			}
		}
		return -1;
	}

	bool BinarySearch(int array[], int arraySize, int needle) {
		return true;
	}
}


