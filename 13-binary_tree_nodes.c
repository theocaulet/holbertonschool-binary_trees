#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least one child in binary tree
 * @tree: pointer to the root node of the tree to count the nodes
 *
 * Return: number of nodes with at least one child, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_size;
	size_t right_size;
	size_t tree_nodes;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_size = binary_tree_nodes(tree->left);
	right_size = binary_tree_nodes(tree->right);

	tree_nodes = (left_size + right_size + 1);

	return (tree_nodes);
}
