#include "Tree.h"
#include <iostream>

void Tree::DisplayInOrder(Node* node) {
	if (node == NULL) {
		return;
	}
	
	DisplayInOrder(node->left);
	
	std::cout << node->data << " ";
	
	DisplayInOrder(node->right);
}


void Tree::DisplayPreOrder(Node* node) {
	if (node == NULL) {
		return;
	}
	std::cout << node->data << " ";
	DisplayPreOrder(node->left);
	DisplayPreOrder(node->right);
}


void Tree::DisplayPostOrder(Node* node) {
	if (node == NULL) {
		return;
	}
	DisplayPostOrder(node->left);
	DisplayPostOrder(node->right);
	std::cout << node->data << " ";
}