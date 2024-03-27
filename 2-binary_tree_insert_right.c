#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node in the right
 * @parent: pointer to the node to insert the left-child in
 * @value: value to put in the new node
 * Return: pointer to the new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *node;

    node = binary_tree_node(parent, value);

    if (parent == NULL || node == NULL)
    {
        return (NULL);
    }

    if (parent->right != NULL)
    {
        node->right = parent->right;
        parent->right->parent = node;
    }
    parent->right = node;
    return (node);
}
