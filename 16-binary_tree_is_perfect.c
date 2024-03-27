#include "binary_trees.h"

/**
* binary_tree_is_leaf - check if a node is a leaf
* @node: pointer to te node to check
* Return: 1 if node is a leaf
*          0 if not
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}

/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height.
* Return: THE HEIGHT
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left >= right)
		return (1 + left);
	return (1 + right);
}

/**
* binary_tree_is_perfect - check if a binary tree is perfect
* @tree: pointer to the root node of the tree to check
* Return: 0 if tree is NULL, or if tree not perfect
*           1 is tree is perfect
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *leftT, *rightT;

	if (tree == NULL)
		return (0);
	leftT = tree->left;
	rightT = tree->right;
	if (binary_tree_is_leaf(tree))
		return (1);
	if (rightT == NULL || leftT == NULL)
		return (0);
	if (binary_tree_height(leftT) == binary_tree_height(rightT))
	{
		if (binary_tree_is_perfect(leftT) && binary_tree_is_perfect(rightT))
			return (1);
	}
	return (0);
}
