#include "binary_trees.h"

/**
* binary_tree_is_full - Checks if a binary tree is full
* @tree: Tree to check
* Return: int
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	else
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
