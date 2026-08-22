#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of height to measure
 *
 * Return: Height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		return (1 + binary_tree_height(tree->left));
	}
	if (tree->right != NULL)
	{
		return (1 + binary_tree_height(tree->right));
	}

	return (0);
}
