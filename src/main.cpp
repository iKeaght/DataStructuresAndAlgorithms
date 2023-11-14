
#include <iostream>
#include "Data Structures/Graph/Graph.h"
#include "Algorithms/SearchAlgorithms.h"
#include <array>

int main()
{
    Graph graph;
    graph.AddEgde(0, 1, true);
    graph.AddEgde(0, 2, true);
    graph.AddEgde(1, 2, true);
    graph.AddEgde(2, 0, true);
    graph.AddEgde(2, 3, true);
    graph.AddEgde(3, 3, true);
    graph.DepthFirstSearch(2, 0);
    
    
}


