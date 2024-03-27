#include "binary_trees.h"

/**
* binary_tree_insert_left - inserte node in the left
* @parent: pointer to the node to insert the left-child in
* @value: value to put in the new node
* Return: pointer to the new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = binary_tree_node(parent, value);

	if (parent == NULL || node == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	parent->left = node;
	return (node);
}
