#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks whether the node is a leaf of binary tree.
 * @node: Pointer to the node to be checked
 *
 * Return: 1 if node is leaf, else 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->right != NULL || node->left != NULL)
		return (0);

	return (1);
}
