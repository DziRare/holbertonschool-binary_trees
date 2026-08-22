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
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_perfect;
	size_t right_perfect;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);

	left_perfect = binary_tree_is_perfect(tree->left);
	right_perfect = binary_tree_is_perfect(tree->right);
	return (left_perfect && right_perfect);
}
