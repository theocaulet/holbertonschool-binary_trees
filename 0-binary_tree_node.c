#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node
 * @value: Value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *tr = malloc(sizeof(*tr));

if (tr == NULL)
{
return (NULL);
}

tr->n = value;
tr->left = NULL;
tr->right = NULL;
tr->parent = parent;

return (tr);
}
