#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_nodes - Counts nodes with at least one child
 * @tree: Pointer to root node of tree
 *
 * Return: Number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
	{
		return (0);
	}

	count = 1;

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		count += binary_tree_nodes(tree->left);
	}
	if (tree->right != NULL)
	{
		count += binary_tree_nodes(tree->right);
	}

	return (count);
}
