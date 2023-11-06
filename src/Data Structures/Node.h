#pragma once
#include <iostream>
struct Node {
	int data;
	struct Node* left;
	struct Node* right;
};

struct Node* newNode(int data);