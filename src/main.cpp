
#include <iostream>
#include "Algorithms/Utils.h"
#include "Algorithms/SortAlgorithms.h"


int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7, 14 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	std::cout << "Given array is : \n";
	Utils::PrintArray(arr);
	SortAlgorithms::MergeSort(arr, 0, arr_size - 1);
	std::cout << "\nSorted array is \n";
	Utils::PrintArray(arr);

}


