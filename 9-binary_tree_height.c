#include "binary_trees.h"


/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: height or NULL if tree is empty
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree != NULL)
	{
		if (tree->left)
		{
			left = binary_tree_height(tree->left) + 1;
		}
		if (tree->right)
		{
			right = binary_tree_height(tree->right) + 1;
		}
		if (left >= right)
			return (left);
		else
			return (right);
	}
	return (0);
}
