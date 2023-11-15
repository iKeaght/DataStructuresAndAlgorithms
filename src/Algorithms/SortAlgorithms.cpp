#include "SortAlgorithms.h"
#include "Utils.h"
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

	void BucketSort(float* array, int size)
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

	std::vector<int> CountingSort(std::vector<int>& vect)
	{
		int size = vect.size();
		int max = 0;

		for (int i = 0; i < size; i++) {
			max = std::max(max, vect[i]);
		}

		std::vector<int> countVector(max + 1, 0);

		for (int i = 0; i < size; i++) {
			countVector[vect[i]]++;
		}
		for (int i = 1; i <= max; i++) {
			countVector[i] += countVector[i - 1];
		}

		std::vector<int> outputVector(size);
		for (int i = size - 1; i >= 0; i--) {
			outputVector[countVector[vect[i]] - 1] = vect[i];
			countVector[vect[i]]--;
		}
		return outputVector;
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
