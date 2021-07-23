#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the nodes
 *
 * Return: number of nodes with at least 1 child in a binary tree
 *         otherwise 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodenum = 0;

	if (tree)
	{
		if (tree->left || tree->right)
		{
			nodenum += 1;
		}
		else
		{
			nodenum += 0;
		}
		nodenum += binary_tree_nodes(tree->left);
		nodenum += binary_tree_nodes(tree->right);
	}
	return (nodenum);
}
