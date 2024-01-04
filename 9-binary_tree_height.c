#include "binary_trees.h"

size_t Max(size_t num1, size_t num2);

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: the height of tree or 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (Max(left_height, right_height) + 1);
}

/**
 * Max - get the maximum of two numbers
 *
 * @num1: the first number
 * @num2: the second number
 *
 * Return: the maximum number
*/
size_t Max(size_t num1, size_t num2)
{
	if (num1 >= num2)
		return (num1);
	else
		return (num2);
}
