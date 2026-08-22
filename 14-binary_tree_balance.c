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
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = 0;
	right_height = 0;

	if (tree->left == NULL && tree->right == NULL)
	{
	return (0);
	}

	if (tree->left != NULL)
	{
		left_height = binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
	right_height = binary_tree_height(tree->right);
	}

	if (left_height > right_height)
	{
		return (1 + left_height);
	}
	else
	{
	return (1 + right_height);
	}
}

/**
 * binary_tree_balance - Measures balance of binary tree
 * @tree: Pointer to root node of tree to check
 *
 * Return: Balance of binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL)
	{
		left_height = 0;
	}
	else
	{
		left_height = 1 + (int)binary_tree_height(tree->left);
	}

	if (tree->right == NULL)
	{
		right_height = 0;
	}
	else
	{
		right_height = 1 + (int)binary_tree_height(tree->right);
	}


	return (left_height - right_height);

}
