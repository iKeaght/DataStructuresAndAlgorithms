#pragma once
#include <iostream>
#include <list>
#include <map>
class Graph {
public:
	bool* visited;
	std::map<int, std::list<int> > adj;
	int numVertices;
	Graph(int vertices);
	void AddEgde(int origin, int vertex, bool bidirectional);
	void DepthFirstSearch(int vertex);
	bool DepthFirstSearch(int vertex, int needle);
	void ResetVisited();
	void BreadthFirstSearch(int vertex);
	bool BreadthFirstSearch(int vertex, int needle);
};

