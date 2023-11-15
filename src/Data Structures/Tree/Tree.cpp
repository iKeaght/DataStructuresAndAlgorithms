#include "Tree.h"
#include <iostream>
#include <queue>

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

void Tree::DisplayLevelOrder(Node* node)
{
	std::queue<Node*>queue;
	queue.push(node);
	while (queue.empty() == false) {
		Node* node = queue.front();
		std::cout << node->data << " ";
		queue.pop();
		if (node->left != NULL) {
			queue.push(node->left);
		}
		if (node->right != NULL) {
			queue.push(node->right);
		}
	}
}


