#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_preorder - Goes through binary tree using pre-order travel
 * @tree: Pointer to root node of tree
 * @func: Function to call for each node
 *
 * Return: No return value
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	{
		return;
	}

	func(tree->n);
	if (tree->left != NULL)
	{
		binary_tree_preorder(tree->left, func);
	}
	if (tree->right != NULL)
	{
		binary_tree_preorder(tree->right, func);
	}

}
