
#include <iostream>
#include "Algorithms/Utils.h"
#include "Algorithms/SortAlgorithms.h"
#include <array>
int main()
{
	int size = 10;
	float arr[] = { 0.25, 0.36, 0.58, 0.41, 0.29, 0.22, 0.45, 0.79, 0.01, 0.69 };
	std::cout << "Array before Sorting: ";
	Utils::PrintArray(arr);
	SortAlgorithms::BucketSort(arr, size);
	std::cout << "Array after Sorting: ";
	Utils::PrintArray(arr);
}


