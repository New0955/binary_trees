#include "binary_trees.h"

/**
 * binary_tree_size - Size of a binary tree measured.
 * @tree: A pointer to the size of the root node of tree to measure.
 *
 * Return: Size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->right);
		size += binary_tree_size(tree->left);
	}
	return (size);

}
