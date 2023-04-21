#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: binary_tree_t *, a pointer to the parent node of the node to create
 * @value: int, the value to put in the new node
 * (the created node doesn't have any children)
 *
 * Return: binary_tree_t *, the pointer to the new node
 * or NULL if failed
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (!(new))
	{
		free(new);
		return (NULL);
	}

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
