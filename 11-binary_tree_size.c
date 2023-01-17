#include "binary_trees.h"

/**
* binary_tree_size - Measures the size of a binary tree
* @tree: Node to measure
* Return: The size of the tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count;

	if (!tree)
		return (0);

	count = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;
	return (count);
}
