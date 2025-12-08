#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: size of the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	return (0);

	left_height = binary_tree_depth(tree->left);
	right_height = binary_tree_depth(tree->right);
	if (left_height > right_height)
	return (1 + left_height);
	else
	return (1 + right_height);
}


