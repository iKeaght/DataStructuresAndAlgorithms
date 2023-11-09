
#include <iostream>
#include "Data Structures/Graph/Graph.h"

int main()
{
	Graph graph(4);
	graph.AddEgde(1, 2, false);
	graph.AddEgde(4, 2, true);
	graph.AddEgde(1, 3, true);
	graph.AddEgde(4, 3, false);
	graph.AddEgde(1, 4, false);
	graph.DisplayGraph();
}


