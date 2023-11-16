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

	void HeapifyMaxHeap(int *array, int size, int index)
	{
		int largest_value = index;
		int left = 2 * largest_value + 1;
		int right = 2 * largest_value + 2;

		if (left < size && array[left] > array[largest_value]) {
			largest_value = left;
		}
		if (right < size && array[right] > array[largest_value]) {
			largest_value = right;
		}

		if (largest_value != index) {
			Utils::Swap(array[index], array[largest_value]);
			HeapifyMaxHeap(array, size, largest_value);
		}
	}

	void HeapifyMinHeap(int* array, int size, int index)
	{
		int largest_value = index;
		int left = 2 * largest_value + 1;
		int right = 2 * largest_value + 2;

		if (left < size && array[left] < array[largest_value]) {
			largest_value = left;
		}
		if (right < size && array[right] < array[largest_value]) {
			largest_value = right;
		}

		if (largest_value != index) {
			Utils::Swap(array[index], array[largest_value]);
			HeapifyMinHeap(array, size, largest_value);
		}
	}

	void HeapSortMaxHeap(int* array, int size)
	{
		for (int i = size / 2 - 1; i >= 0; i--) {
			HeapifyMaxHeap(array, size, i);
		}

		for (int i = size - 1; i >= 0; i--) {
			Utils::Swap(array[0], array[i]);

			HeapifyMaxHeap(array, i, 0);
		}
	}	
	void HeapSortMinHeap(int* array, int size)
	{
		for (int i = size / 2 - 1; i >= 0; i--) {
			HeapifyMinHeap(array, size, i);
		}

		for (int i = size - 1; i >= 0; i--) {
			Utils::Swap(array[0], array[i]);

			HeapifyMinHeap(array, i, 0);
		}
	}

	void InsertionSort(int* array, int size, bool ascending)
	{
		for (int i = 1; i < size; i++) {
			int key = array[i];
			int j = i - 1;
			if (ascending) {
				while (key < array[j] && j >= 0) {
					array[j + 1] = array[j];
					--j;
				}

			}
			else {
				while (key > array[j] && j >= 0) {
					array[j + 1] = array[j];
					--j;
				}
			}
			array[j + 1] = key;
		}
	}

	void Merge(int* array, const int left, const int mid, const int right)
	{
		const int subArrayOne = mid - left + 1;
		const int subArrayTwo = right - mid;

		//temp
		auto* leftArray = new int[subArrayOne];
		auto* rightArray = new int[subArrayTwo];
		for (auto i = 0; i < subArrayOne; i++) {
			leftArray[i] = array[left + i];
		}for (auto j = 0; j < subArrayTwo; j++) {
			rightArray[j] = array[mid + 1 + j];
		}

		auto indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0;
		int indexOfMergedArray = left;


		// Merge the temp arrays back into array[left..right]
		while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
			if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
				array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
				indexOfSubArrayOne++;
			}
			else {
				array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
				indexOfSubArrayTwo++;
			}
			indexOfMergedArray++;
		}
		// Copy the remaining elements of
		// left[], if there are any
		while (indexOfSubArrayOne < subArrayOne) {
			array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
			indexOfSubArrayOne++;
			indexOfMergedArray++;
		}

		// Copy the remaining elements of
		// right[], if there are any
		while (indexOfSubArrayTwo < subArrayTwo) {
			array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
			indexOfSubArrayTwo++;
			indexOfMergedArray++;
		}

		delete[] leftArray;
		delete[] rightArray;
	}

	void MergeSort(int* array, const int begin, const int end)
	{
		if (begin >= end) {
			return;
		}

		int mid = begin + (end - begin) / 2;
		MergeSort(array, begin, mid);
		MergeSort(array, mid + 1, end);
		Merge(array, begin, mid, end);
	}

	int Partition(int* array, int low, int high)
	{
		int pivot = array[low];
		int i = low;
		int j = high;
		while (i < j) {

			while (array[i] <= pivot) {
				i++;
			}

			while (array[j] > pivot) {
				j--;
			}

			if (i < j) {
				Utils::Swap(array[i], array[j]);
			}

		}
		Utils::Swap(array[low], array[j]);
		return j;
	}

	

	void QuickSort(int *array, int low, int high)
	{
		if (low < high) {
			int pivot = Partition(array, low, high);
			QuickSort(array, low, pivot - 1);
			QuickSort(array, pivot + 1, high);
		}
	}

	void CountSortRadix(int* array, int size, int exp)
	{
		int output[5];
		int i;
		int count[10] = { 0 };

		for (int i = 0; i < size; i++) {
			count[(array[i] / exp) % 10]++;
		}

		for (i = 1; i < 10; i++) {
			count[i] += count[i - 1];
		}

		for (i = size - 1; i >= 0; i--) {
			output[count[(array[i] / exp) % 10] - 1] = array[i];
			count[(array[i] / exp) % 10]--;
		}
		
		for (i = 0; i < size; i++) {
			array[i] = output[i];
		}
	}

	void RadixSort(int* array, int size)
	{
		int max = Utils::GetMax(array, size);
		for(int exp = 1; max/exp > 0; exp *=10){
			CountSortRadix(array, size, exp);
		}
	}

	void SelectionSort()
	{
	}

	void ShellSort()
	{
	}
}
