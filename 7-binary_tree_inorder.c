#include "binary_trees.h"

/**
*binary_tree_inorder - Prints a binary tree using in-order traversal
*@tree: Pointer to the root node of the tree to traverse
*@func: Function to call for each node
*Return: N/A
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}

}
