#include "binary_trees.h"
#include <stdlib.h>

/**
 * *binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer of node to find the sibling
 *
 * Return: Pointer to sibling node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->parent->left == node->parent)
	{
		uncle = node->parent->parent->right;
	}
	else
	{
		uncle = node->parent->parent->left;
	}

	return (uncle);
}
