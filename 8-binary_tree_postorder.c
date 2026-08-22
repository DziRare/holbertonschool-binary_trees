#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_postorder - Goes through binary tree using post-order travel
 * @tree: Pointer to root node of tree
 * @func: Function to call for each node
 *
 * Return: No return value
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	if (tree->left != NULL)
	{
		binary_tree_postorder(tree->left, func);
	}
	if (tree->right != NULL)
	{
		binary_tree_postorder(tree->right, func);
	}

	func(tree->n);
}
