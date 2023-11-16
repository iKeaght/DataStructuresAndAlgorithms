
#include <iostream>
#include "Algorithms/Utils.h"
#include "Algorithms/SortAlgorithms.h"

int main()
{
	int arr[] = { 60 ,20 ,40 ,70, 30, 10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	SortAlgorithms::InsertionSort(arr, n, true);
	Utils::PrintArray(arr);

	SortAlgorithms::InsertionSort(arr, n, false);
	Utils::PrintArray(arr);
	return 0;

}


