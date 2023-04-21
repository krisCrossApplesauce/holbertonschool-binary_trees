#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * (aka has no parent)
 * @node: binary_tree_t *, pointer to the node to check
 *
 * Return: 1 if node is a root, 0 if NULL or otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{ return (0); }

	if (node->parent == NULL)
	{ return (1); }
	else
	{ return (0); }
}
