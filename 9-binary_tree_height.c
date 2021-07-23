#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height of
 *
 * Return: the height of the tree. If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left = 0, right = 0;

		if (tree->left)
		{
			left = 1 + binary_tree_height(tree->left);
		}
		else
		{
			left = 0;
		}
		if (tree->right)
		{
			right = 1 + binary_tree_height(tree->right);
		}
		else
		{
			right = 0;
		}
		if (left > right)
		{
			return (left);
		}
		else
		{
			return (right);
		}
	}
	return (0);
}
