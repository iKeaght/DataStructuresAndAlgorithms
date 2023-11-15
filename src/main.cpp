
#include <iostream>
#include "Algorithms/Utils.h"
#include "Algorithms/SortAlgorithms.h"

int main()
{
	int arr[] = { 60 ,20 ,40 ,70, 30, 10 };
	int n = sizeof(arr) / sizeof(arr[0]);

	for (int i = n / 2 - 1; i >= 0; i--) {
		SortAlgorithms::HeapifyMinHeap(arr, n, i);
	}
	std::cout << "After heapifying min array is \n";
	Utils::PrintArray(arr, n);

	SortAlgorithms::HeapSortMinHeap(arr, n);

	std::cout << "Sorted array descending is \n";
	Utils::PrintArray(arr, n);


	std::cout << " -------------------------------- " << "\n";
	for (int i = n / 2 - 1; i >= 0; i--) {
		SortAlgorithms::HeapifyMaxHeap(arr, n, i);
	}
	std::cout << "After heapifying max array is \n";
	Utils::PrintArray(arr, n);

	SortAlgorithms::HeapSortMaxHeap(arr, n);

	std::cout << "Sorted array ascending is \n";
	Utils::PrintArray(arr, n);
	return 0;

}


