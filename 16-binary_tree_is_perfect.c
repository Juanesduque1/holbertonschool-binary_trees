#include "binary_trees.h"

/**
* is_perfect - Function if the tree is perfect
* @tree: Tree
* @height: Height of the tree
* Return: Integer
*/
int is_perfect(const binary_tree_t *tree, int height)
{
	int depth = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
	{
		depth = binary_tree_depth(tree);
		if (depth == height)
			return (1);
		return (0);
	}

	return (is_perfect(tree->left, height) && is_perfect(tree->right, height));
}

/**
* binary_tree_is_perfect - Function that checks if a binary tree is perfect
* @tree: Tree
* Return: integer
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height;

	if (!tree)
		return (0);

	height = binary_tree_height(tree);

	return (is_perfect(tree, height));
}
