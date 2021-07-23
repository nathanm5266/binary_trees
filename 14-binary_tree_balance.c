#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 *
 * Return: If tree is NULL, it returns 0, otherwise return height
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
			left = 1;
		}
		if (tree->right)
		{
			right = 1 + binary_tree_height(tree->right);
		}
		else
		{
			right = 1;
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


/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor of a binary tree otherwise 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lheight, rheight;

	if (tree == NULL)
		return (0);
	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);
	return (lheight - rheight);
}
