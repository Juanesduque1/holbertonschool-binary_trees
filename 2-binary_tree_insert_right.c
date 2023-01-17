#include "binary_trees.h"

/**
* binary_tree_insert_right - Function to insert the right node in a binary tree
* @parent: Parent node to add
* @value: Value of the node
* Return: Binary tree with right node inserted
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (parent->right)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
