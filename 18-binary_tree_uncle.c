#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to uncle,
 * or NULL if node or uncle is NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *unc = NULL;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{ return (unc); }

	if (node->parent->parent->left != node->parent
			&& node->parent->parent->left != NULL)
	{ unc = node->parent->parent->left; }
	else if (node->parent->parent->right != node->parent
			&& node->parent->parent->right != NULL)
	{ unc = node->parent->parent->right; }

	return (unc);
}
