#include "binary_trees.h"

/**
 * binary_tree_postorder - Using post-order, traverses a binary tree.
 * @tree: Root node of the tree to traverse pointer.
 * @func: A function to call for each node pointer.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
