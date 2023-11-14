#include "Graph.h"

Graph::Graph(int vertices) {
	numVertices = vertices;
	visited = new bool[vertices];
	for (int i = 0; i < vertices; i++) {
		visited[i] = false;
	}
}

void Graph::AddEgde(int origin, int vertex, bool bidirectionnal) {
	adj[origin].push_back(vertex);

	if (bidirectionnal) {
		adj[vertex].push_back(origin);
	}
}


void Graph::ResetVisited() {
	for (int i = 0; i < numVertices; i++) {
		visited[i] = false;
	}
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
	std::cout << "Vertex : " << needle << " not found" << std::endl;

	return false;
}
void Graph::BreadthFirstSearch(int vertex) {
	std::list<int> queue;

	visited[vertex] = true;
	queue.push_back(vertex);

	std::list<int>::iterator i;

	while (!queue.empty()) {
		int currVertex = queue.front();
		std::cout << currVertex << " ";
		queue.pop_front();

		for (i = adj[vertex].begin(); i != adj[vertex].end(); i++) {
			if (!visited[*i]) {
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}
}
bool Graph::BreadthFirstSearch(int vertex, int needle) {
	std::list<int> queue;

	visited[vertex] = true;
	queue.push_back(vertex);

	std::list<int>::iterator i;

	while (!queue.empty()) {
		int currVertex = queue.front();
		std::cout << currVertex << " ";
		if (currVertex == needle) {
			std::cout << "Vertex : " << needle << " found" << std::endl;
			return true;
		}
		queue.pop_front();

		for (i = adj[vertex].begin(); i != adj[vertex].end(); i++) {
			if (!visited[*i]) {
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}
	std::cout << "Vertex : " << needle << " not found" << std::endl;
	return false;
}