#include "binary_tree.h"

/**
 * binary_tree_height - Measures height of a binary_tree.
 * @tree: A pointer to root node of the tree height to measure.
 *
 * Return: If tree is NULL return 0, else height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t one = 0, two = 0;

		one = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		two = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((one > two) ? one : two);
	}

	return (0);
}

/**
 * binary_tree_balance - Balance a binary tree.
 * @tree: A pointer to the root node of the tree to balance.
 *
 * Return: If tree is NULL return 0, else balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(left->right));
	return (0);
}
