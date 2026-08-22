#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to root node of tree
 *
 * Return: No return value
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
	{
		return (0);
	}

	count = 0;

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left != NULL)
	{
		count += binary_tree_leaves(tree->left);
	}
	if (tree->right != NULL)
	{
		count += binary_tree_leaves(tree->right);
	}

	return (count);
}
