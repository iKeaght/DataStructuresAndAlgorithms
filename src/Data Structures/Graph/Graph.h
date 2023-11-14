#pragma once
#include <iostream>
#include <list>
#include <map>
class Graph {
public:
	std::map<int, bool> visited;
	std::map<int, std::list<int> > adj;
	void AddEgde(int origin, int vertex, bool bidirectional);
	void DisplayGraph();
	void DepthFirstSearch(int vertex);
	bool DepthFirstSearch(int vertex, int needle);
	void BreadthFirstSearch(int vertex);
};

