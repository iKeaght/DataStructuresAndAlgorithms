
#include <iostream>
#include "Algorithms/Utils.h"
#include "Algorithms/SortAlgorithms.h"


int main()
{
	int arr[] = { 543, 986, 217, 765, 329 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	std::cout << "Given array is : \n";
	Utils::PrintArray(arr);
	SortAlgorithms::ShellSort(arr, arr_size);
	std::cout << "\nSorted array is \n";
	Utils::PrintArray(arr);

}


