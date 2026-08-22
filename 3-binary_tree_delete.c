#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - Deltes entire binary tree
 * @tree: Pointer to root node of tree
 *
 * Return: No return value
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	if (tree->left != NULL)
	{
		binary_tree_delete(tree->left);
	}
	if (tree->right != NULL)
	{
		binary_tree_delete(tree->right);
	}

	free(tree);
}
