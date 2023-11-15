
#include <iostream>
#include "Data Structures/Graph/Graph.h"
#include "Algorithms/SearchAlgorithms.h"
#include <array>

int main()
{
    std::string S1, S2;
    S1 = "RGBGARGA";
    S2 = "BGRARG";
    std::cout << SearchAlgorithms::LongestCommonSubsequence(S1, S2, S1.size(), S2.size()) << std::endl;
}
    



