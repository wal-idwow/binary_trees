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
* binary_tree_is_full - check if a binary tree is full
* @tree: pointer to the root node of the tree to check
* Return: 0 if tree is NULL or if tree is not full
*          1 if tree is full
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	if (left == 0 || right == 0)
		return (0);
	return (1);
}
