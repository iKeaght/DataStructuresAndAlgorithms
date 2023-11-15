#include "SortAlgorithms.h"
#include "Utils.h"


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

	void SortAlgorithms::BucketSort()
	{
	}

	void SortAlgorithms::CountingSort()
	{
	}

	void SortAlgorithms::HeapSort()
	{
	}

	void SortAlgorithms::InsertionSort()
	{
	}

	void SortAlgorithms::MergeSort()
	{
	}

	void SortAlgorithms::QuickSort()
	{
	}

	void SortAlgorithms::RadixSort()
	{
	}

	void SortAlgorithms::SelectionSort()
	{
	}

	void SortAlgorithms::ShellSort()
	{
	}
}
