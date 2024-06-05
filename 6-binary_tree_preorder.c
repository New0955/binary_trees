#include "binary_trees.h"

/**
 * binary_tree_preorder - Using preorder traversal, goes through binary tree.
 * @tree: A pointer of traverse to the root node of the tree.
 * @func: A pointer to call for each node to a function.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
