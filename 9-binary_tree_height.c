#include "binary_trees.h"

/**
 * binary_tree_height - counts the height of a binary tree.
 * @tree: Root node of the tree to measure the height pointer.
 *
 * Return: If tree is NULL return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t one = 0, two = 0;
		
		one = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		two = tree->right ? 1 + binary_tree_height(tree->left) : 0;
		return ((one > two) ? one : two);
	}
	return (0);
}
