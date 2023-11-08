// DataStructuresAndAlgorithms.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Data Structures/Tree/Tree.h"
#include "Data Structures/Tree/BinaryTree.h"

int main()
{
	BinaryTree bt;
	Node* node = new Node(1);
	bt.displayInorder(node);

}

