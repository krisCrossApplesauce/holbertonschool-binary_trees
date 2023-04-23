#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: binary_tree_t *,
 * pointer to the root node of the tree to measure the height
 *
 * Return: size_t, the height of the node
 * return 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h = 0, l = 1, r = 1;

	if (tree == NULL)
	{ return (h); }

	if (tree->left == NULL && tree->right == NULL)
	{ return (h); }

	l = l + binary_tree_height(tree->left);
	r = r + binary_tree_height(tree->right);

	if (l >= r)
	{ h = l; }
	else
	{ h = r; }

	return (h);
}
