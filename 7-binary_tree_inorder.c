#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 *
 * @tree: binary_tree_t *, pointer to the root node of the tree to traverse
 * @func: void (*func)(int)), pointer to a function to call for each node,
 * the value in the node must be passed as a parameter to this function
 *
 * Return: void, if tree or func is NULL, do nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{ return; }

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
