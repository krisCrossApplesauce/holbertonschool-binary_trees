#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes
 * with at least 1 child in a binary tree
 *
 * @tree: binary_tree_t *,
 * pointer to the root node of the tree to count the number of nodes
 *
 * Return: size_t, return 0 if tree is NULL
 * a NULL pointer is not a node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
	{ return (0); }

	if (tree->left != NULL || tree->right != NULL)
	{ n = 1; }

	n = n + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	return (n);
}
