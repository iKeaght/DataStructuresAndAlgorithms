
#include <iostream>
#include "Algorithms/SearchAlgorithms.h"

int main()
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int N = sizeof(arr) / sizeof(arr[0]);

    int result = SearchAlgorithms::LinearSearch(arr, N, x);
}


