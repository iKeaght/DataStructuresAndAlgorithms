#pragma once
#include <iostream>
#include <vector>
namespace SortAlgorithms {

	void BubbleSort(int array[], int size, bool ascending);
	void BucketSort(float* array, int size);
	std::vector<int> CountingSort(std::vector<int>& array);
	void HeapifyMaxHeap(int *array, int size, int index);
	void HeapifyMinHeap(int *array, int size, int index);
	void HeapSortMaxHeap(int *array, int size);
	void HeapSortMinHeap(int *array, int size);
	void InsertionSort();
	void MergeSort();
	void QuickSort();
	void RadixSort();
	void SelectionSort();
	void ShellSort();


}