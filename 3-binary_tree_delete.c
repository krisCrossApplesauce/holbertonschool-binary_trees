#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 *
 * @tree: binary_tree_t *, pointer to the root node of the tree to delete
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{ return; }

	if (tree->left != NULL)
	{ binary_tree_delete(tree->left); }

	if (tree->right != NULL)
	{ binary_tree_delete(tree->right); }

	free(tree->parent);
	free(tree->left);
	free(tree->right);

	free(tree);
}
