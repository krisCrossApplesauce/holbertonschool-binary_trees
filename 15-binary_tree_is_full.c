#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: binary_tree_t *, pointer to the root node of the tree to check
 *
 * Return: int, 1 if full, 0 otherwise
 * if tree is NULL, then return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int x = 0;

	if (tree == NULL)
	{ return (x); }

	if ((tree->left == NULL && tree->right == NULL))
	{ x = 1; }
	else if ((tree->left != NULL && tree->right != NULL))
	{ x = binary_tree_is_full(tree->left) * binary_tree_is_full(tree->right); }
	else
	{ x = 0; }

	return (x);
}
