#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the leaves
 *
 * Return: number of leaves in a binary tree otherwise 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leafnum = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
		{
			leafnum += 1;
		}
		else
		{
			leafnum += 0;
		}
		leafnum += binary_tree_leaves(tree->left);
		leafnum += binary_tree_leaves(tree->right);
	}
	return (leafnum);
}
