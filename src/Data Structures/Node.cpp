#include "Node.h"

struct Node* newNode(int value) {
	Node* node = new Node;
	node->data = value;
	node->left = NULL;
	node->right = NULL;
	return node;
}