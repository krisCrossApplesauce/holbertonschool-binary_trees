#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node,
 * or NULL if sibling, parent, or node is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sib = NULL;

	if (node == NULL || node->parent == NULL)
	{ return (sib); }

	if (node->parent->left != node && node->parent->left != NULL)
	{ sib = node->parent->left; }
	else if (node->parent->right != node && node->parent->right != NULL)
	{ sib = node->parent->right; }

	return (sib);
}
