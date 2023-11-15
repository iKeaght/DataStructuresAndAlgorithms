#pragma once
#include <iostream>
#include <vector>
namespace SortAlgorithms {

	void BubbleSort(int array[], int size, bool ascending);
	void BucketSort(float* array, int size);
	std::vector<int> CountingSort(std::vector<int>& array);
	void HeapSort();
	void InsertionSort();
	void MergeSort();
	void QuickSort();
	void RadixSort();
	void SelectionSort();
	void ShellSort();


}