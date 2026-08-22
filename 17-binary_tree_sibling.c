#include "binary_trees.h"
#include <stdlib.h>

/**
 * *binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer of node to find the sibling
 *
 * Return: Pointer to sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->left == node) 
	{
		sibling = node->parent->right;
	}
	else
	{
		sibling = node->parent->left;
	}

	return (sibling);
}
