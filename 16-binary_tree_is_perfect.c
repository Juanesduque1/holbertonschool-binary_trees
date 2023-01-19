#include "binary_trees.h"

/**
* binary_tree_depth - Measures the depth of a binary tree
* @tree: Node to measure
* Return: The depth of the tree
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	if (tree->parent)
	{
		count = binary_tree_depth(tree->parent);
		count++;
	}
	return (count);
}

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Node to measure
* Return: The height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

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
