#include "binary_trees.h"

/**
* binary_tree_insert_left - Function to insert the left node in a binary tree
* @parent: Parent node to add
* @value: Value of the node
* Return: Binary tree with left node inserted
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (parent->left)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
