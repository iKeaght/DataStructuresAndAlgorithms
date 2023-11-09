#pragma once
#include <iostream>
#include <vector>
namespace SearchAlgorithms {
	/**
	* @brief Algorithm that performs linear search
	* @param array - a given array
	* @param arraySize - the array size 
	* @return index of valuefound or -1 if not found
	*/
	int LinearSearch(std::vector<int>& vect, int needle);
	//make array version of linearSearch using template
	bool BinarySearch(int array[], int arraySize, int needle);

}
