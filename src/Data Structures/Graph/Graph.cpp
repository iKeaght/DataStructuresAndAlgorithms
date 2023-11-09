#include "Graph.h"

Graph::Graph(int vertices) {
	int sizeList = vertices + 1;
	adjacencyList = new std::list<int>[sizeList];
	size = sizeList;
}

void Graph::AddEgde(int origin, int vertex, bool bidirectionnal) {
	adjacencyList[origin].push_back(vertex);

	if (bidirectionnal) {
		adjacencyList[vertex].push_back(origin);
	}
}


void Graph::DisplayGraph() {
	for (int i = 1; i < size; i++) {
		std::cout << i << "-->";
		for (auto it : adjacencyList[i]) {
			std::cout << it << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

}