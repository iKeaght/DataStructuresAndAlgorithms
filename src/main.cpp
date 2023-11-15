
#include <iostream>
#include "Algorithms/Utils.h"
#include "Algorithms/SortAlgorithms.h"
#include <array>
int main()
{
	std::vector<int> inputArray = { 4, 3, 12, 1, 5, 5, 3, 9 };

	std::vector<int> outputArray = SortAlgorithms::CountingSort(inputArray);
	Utils::PrintVector(outputArray);
}


