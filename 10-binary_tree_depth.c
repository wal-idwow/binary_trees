#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a node in binary tree
* @node:  pointer to the node to measure the depth
* Return: 0 if node is NULL
*           otherwise: depth of a node in binary tree
*/
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth = 0;

	if (node == NULL)
		return (depth);
	while (node->parent != NULL)
	{
		depth++;
		node = node->parent;
	}
	return (depth);
}
