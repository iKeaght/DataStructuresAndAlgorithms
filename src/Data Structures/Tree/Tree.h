#pragma once
#include "Node.h"
class Tree {
public:
	void DisplayInOrder(Node* node);
	void DisplayPreOrder(Node* node);
	void DisplayPostOrder(Node* node);;

	void DisplayLevelOrder(Node* node);
};

