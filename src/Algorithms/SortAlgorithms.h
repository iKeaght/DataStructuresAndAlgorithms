#pragma once
#include <iostream>
#include <vector>
namespace SortAlgorithms {

	void BubbleSort(int array[], int size, bool ascending);
	void BucketSort(float* array, int size);
	std::vector<int> CountingSort(std::vector<int>& array);
	void HeapifyMaxHeap(int* array, int size, int index);
	void HeapifyMinHeap(int* array, int size, int index);
	void HeapSortMaxHeap(int* array, int size);
	void HeapSortMinHeap(int* array, int size);
	void InsertionSort(int* array, int size, bool ascending);
	void Merge(int* array, const int left, const int mid, const int right);
	void MergeSort(int* array, const int begin, const int end);
	int Partition(int* array, int low, int high);
	void QuickSort(int* array, int low, int high);
	void CountSortRadix(int* array, int size, int exp);
	void RadixSort(int* array, int size);
	void SelectionSort(int* array, int size);
	void ShellSort();


}