// DataStructuresAndAlgorithms.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Data Structures/Tree/Tree.h"
#include "Data Structures/Tree/BinaryTree.h"

int main()
{
    Tree tree;
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    std::cout << "Inorder traversal of binary tree is : " << std::endl;
    tree.DisplayInOrder(root);
    std::cout << "\nPreorder traversal of binary tree is : " << std::endl;
    tree.DisplayPreOrder(root);
    std::cout << "\nPostorder traversal of binary tree is : " << std::endl;
    tree.DisplayPostOrder(root);
}


