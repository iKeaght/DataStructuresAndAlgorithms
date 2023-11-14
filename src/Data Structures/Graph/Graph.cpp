#include "Graph.h"
void Graph::AddEgde(int origin, int vertex, bool bidirectionnal) {
	adj[origin].push_back(vertex);

	if (bidirectionnal) {
		adj[vertex].push_back(origin);
	}
}


void Graph::DisplayGraph() {
	/*for (int i = 0; i < totalVertices; i++) {
		std::cout << i << "-->";
		for (auto it : adj[i]) {
			std::cout << it << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;*/

}


void Graph::DepthFirstSearch(int vertex) {
	visited[vertex] = true;
	std::cout << vertex << " ";

	std::list<int>::iterator i;
	for (i = adj[vertex].begin(); i != adj[vertex].end(); i++) {
		if (!visited[*i]) {
			DepthFirstSearch(*i);
		}
	}
}

bool Graph::DepthFirstSearch(int vertex, int needle) {
	visited[vertex] = true;


	std::cout << vertex << " ";
	if (needle == vertex) {
		std::cout << "Vertex : " << needle << " found" << std::endl;
		return true;
	}

	std::list<int>::iterator i;
	for (i = adj[vertex].begin(); i != adj[vertex].end(); i++) {
		if (!visited[*i]) {
			if (DepthFirstSearch(*i, needle)) {
				return true;
			} 
		}
	}
	return false;
}
void Graph::BreadthFirstSearch(int vertex) {

}