#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: the node to check
 * Return: 1 if the node is a leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->right || node->left) ? 0 : 1);
}
