#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * if parent already has a left-child, the new node must take its place,
 * and the old left-child must be set as the left-child of the new node
 *
 * @parent: binary_tree_t *, a pointer to the node to insert the left-child in
 * @value: int, the value to store in the new node
 *
 * Return: binary_tree_t *, the pointer to the new node
 * or NULL if failed or parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (!(new) || parent == NULL)
	{
		free(new);
		return (NULL);
	}

	new->parent = parent;
	new->n = value;
	if (parent->left != NULL)
	{
		new->left = parent->left;
		new->left->parent = new;
	}
	else
	{ new->left = NULL; }
	new->right = NULL;

	parent->left = new;

	return (new);
}
