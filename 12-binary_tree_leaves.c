#include "binary_trees.h"

/**
 * binary_tree_leaves - Leaves in a binary tree counted.
 * @tree: A pointer to count the leaves of root node of the tree.
 *
 * Return: size of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
