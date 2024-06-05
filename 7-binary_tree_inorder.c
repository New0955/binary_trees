#include "binary_trees.h"

/**
 * binary_tree_inorder - using inorder traverse, goes through binary tree
 * @tree: Root node of the tree to traverse pointer.
 * @func: For each node, it's a pointer to a function to call.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
