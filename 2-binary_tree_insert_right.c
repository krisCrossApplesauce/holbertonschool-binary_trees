#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * if parent already has a right-child, the new node must take its place,
 * and the old right-child must be set as the right-child of the new node
 *
 * @parent: binary_tree_t *, a pointer to the node to insert the right-child in
 * @value: int, the value to store in the new node
 *
 * Return: binary_tree_t *, the pointer to the new node
 * or NULL if failed or parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (!(new) || parent == NULL)
	{
		free(new);
		return (NULL);
	}

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	if (parent->right != NULL)
	{
		new->right = parent->right;
		new->right->parent = new;
	}
	else
	{ new->right = NULL; }

	parent->right = new;

	return (new);
}
