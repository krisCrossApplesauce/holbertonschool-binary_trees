#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: binary_tree_t *, pointer to the node to measure the depth
 *
 * Return: void, return 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 1;

	if (tree == NULL)
	{ return (0); }

	if (tree->parent == NULL)
	{ return (0); }

	d = d + binary_tree_depth(tree->parent);

	return (d);
}
