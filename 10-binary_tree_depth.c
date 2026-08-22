#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_depth - Measures the depth of a node in binary tree
 * @tree: Pointer to node of depth to measure
 *
 * Return: Depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->parent != NULL)
	{
		return (1 + binary_tree_depth(tree->parent));
	}

	return (0);
}
