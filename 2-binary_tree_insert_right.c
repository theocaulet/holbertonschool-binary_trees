#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the parent node
 * @value: Value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	if (parent == NULL)
		return (NULL);

	binary_tree_t *tr = malloc(sizeof(*tr));

	if (tr == NULL)
	{
		return (NULL);
	}

	tr->n = value;
	tr->left = NULL;
	tr->right = NULL;
	if (parent->right != NULL)
	{
		tr->right = parent->right;
		parent->right->parent = tr;
	}
	parent->right = tr;
	tr->parent = parent;

	return (tr);
}
