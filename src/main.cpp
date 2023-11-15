
#include <iostream>
#include "Algorithms/Utils.h"
#include "Algorithms/SortAlgorithms.h"
int main()
{
    int data[5]{ -2, 45, 0, 11, -9 };
    int size = sizeof(data) / sizeof(data[0]);
   
    SortAlgorithms::BubbleSort(data, size, true);
    std::cout << "Sorted Array in Ascending Order:\n";
    Utils::PrintArray(data, size);
}


