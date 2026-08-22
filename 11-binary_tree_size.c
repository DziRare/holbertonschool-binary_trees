#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to root node of tree
 *
 * Return: No return value
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
	{
		return (0);
	}

	count = 1;

	if (tree->left != NULL)
	{
		count += binary_tree_size(tree->left);
	}
	if (tree->right != NULL)
	{
		count += binary_tree_size(tree->right);
	}

	return (count);
}
