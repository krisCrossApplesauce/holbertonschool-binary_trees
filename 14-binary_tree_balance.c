#include "binary_trees.h"

/**
 * binary_tree_height - copy of func from 9 bc i need to use it
 *
 * @tree: stuff
 *
 * Return: it's the same as the original, except it counts the leaves
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h = 0, l = 1, r = 1;

	if (tree == NULL)
	{ return (h); }

	l = l + binary_tree_height(tree->left);
	r = r + binary_tree_height(tree->right);

	if (l >= r)
	{ h = l; }
	else
	{ h = r; }

	return (h);
}


/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree
 * to measure the balance factor
 *
 * Return: int, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int b = 0;

	if (tree == NULL)
	{ return (b); }

	b = binary_tree_height(tree->left) - binary_tree_height(tree->right);

	return (b);
}
