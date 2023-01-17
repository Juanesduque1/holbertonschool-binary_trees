#include "binary_trees.h"

/**
* binary_tree_nodes - Counts the nodes that has at least 1 child
* @tree: Node to count
* Return: Nodes with at least 1 child
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	count = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;

	return (count);
}
