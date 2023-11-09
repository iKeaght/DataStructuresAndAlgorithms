#pragma once
#include <iostream>
#include <list>
class Graph {
public:
	int size;
	Graph(int vertices);
	void AddEgde(int origin, int vertex, bool bidirectional);
	void DisplayGraph();
private: 
	std::list<int>* adjacencyList;
};

