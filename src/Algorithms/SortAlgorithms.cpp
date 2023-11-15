#include "SortAlgorithms.h"
#include "Utils.h"
#include <vector>
#include <algorithm>

namespace SortAlgorithms {

	void BubbleSort(int array[], int size, bool ascending)
	{
		for (int step = 0; step < size - 1; step++) {
			for (int i = 0; i < size - step - 1; i++) {
				if (ascending) {
					if (array[i] > array[i + 1]) {
						Utils::Swap(array[i], array[i + 1]);
					}
				}
				else {
					if (array[i] < array[i + 1]) {
						Utils::Swap(array[i], array[i + 1]);
					}
				}
			}
		}
	}

	void BucketSort(float *array, int size)
	{
		//Create n empty buckets
		std::vector<std::vector<float>> bucket(size);

		//put elements into differents buckets
		for (int i = 0; i < size; i++) {
			bucket[int(size * array[i])].push_back(array[i]);
		}

		//Sort individual vectors
		for (int i = 0; i < size; i++) {
			std::sort(bucket[i].begin(), bucket[i].end());
		}

		int index = 0;
		for (int i = 0; i < size; i++) {
			while (!bucket[i].empty()) {
				array[index++] = *(bucket[i].begin());
				bucket[i].erase(bucket[i].begin());
			}
		}
	}

	void CountingSort()
	{
	}

	void HeapSort()
	{
	}

	void InsertionSort()
	{
	}

	void MergeSort()
	{
	}

	void QuickSort()
	{
	}

	void RadixSort()
	{
	}

	void SelectionSort()
	{
	}

	void ShellSort()
	{
	}
}
