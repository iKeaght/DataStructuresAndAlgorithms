
#include <iostream>
#include "Algorithms/SearchAlgorithms.h"
#include <array>

int main()
{
    std::vector<int> vect = { 2, 3, 4, 10, 40 };
    int array[] = { 2, 3, 4, 10, 40 };
    std::array<int, 5> stdarray = { 2, 3, 4, 10, 40 };
    int size = sizeof(array) / sizeof(array[0]);
    int x = 10;

    int resultVector = SearchAlgorithms::BinarySearch(vect, x);
    int resultArray = SearchAlgorithms::BinarySearch(array, size, x);
    int resultstdArray = SearchAlgorithms::BinarySearch(stdarray, x);
    std::cout << resultVector << std::endl;
    std::cout << resultArray << std::endl;
    std::cout << resultstdArray << std::endl;
   
}


