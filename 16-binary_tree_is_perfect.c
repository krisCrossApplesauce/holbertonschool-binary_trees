#include "binary_trees.h"

/**
 * binary_tree_height - yup
 *
 * @tree: mhm
 *
 * Return: indeed
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 1, r = 1;

	if (tree == NULL)
	{ return (0); }

	l = l + binary_tree_height(tree->left);
	r = r + binary_tree_height(tree->right);

	if (l >= r)
	{ return (l); }
	else
	{ return (r); }
}


/**
 * binary_tree_balance - why
 *
 * @tree: so much
 *
 * Return: copying
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int b = 0;

	if (tree == NULL)
	{ return (b); }

	b = binary_tree_height(tree->left) - binary_tree_height(tree->right);

	return (b);
}


/**
 * binary_tree_is_full - aaaa
 *
 * @tree: aaaa
 *
 * Return: aaaa
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


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * (perfect means both balanced and full)
 *
 * @tree: binary_tree_t *, pointer to the root node of the tree to check
 *
 * Return: int, 1 if perfect, 0 otherwise
 * return 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int x = 0;

	if (tree == NULL)
	{ return (x); }

	if (binary_tree_balance(tree) == 0)
	{ x = binary_tree_is_full(tree); }

	return (x);
}
