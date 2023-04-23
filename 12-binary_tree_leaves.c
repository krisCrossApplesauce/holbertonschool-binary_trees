#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: binary_tree_t *,
 * pointer to the root node of the tree to count the number of leaves
 *
 * Return: size_t, return 0 if tree is NULL
 * (a NULL pointer is not a leaf)
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;

	if (tree == NULL)
	{ return (l); }

	if (tree->left == NULL && tree->right == NULL)
	{ l = 1; }

	l = l + binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (l);
}
