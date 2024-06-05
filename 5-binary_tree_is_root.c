#include "binary_trees.h"

/**
 * binary_tree_is_root - checks node if it is a root of binary tree
 * @node: node to be checked pointer.
 *
 * Return: 1 if node is root, else 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
