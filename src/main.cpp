
#include <iostream>
#include "Algorithms/SearchAlgorithms.h"

int main()
{
    std::vector<int> vect = { 2, 3, 4, 10, 40 };
    int x = 10;

    int result = SearchAlgorithms::LinearSearch(vect, x);
    std::cout << result << std::endl;
}


