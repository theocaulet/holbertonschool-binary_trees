#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the leaves
 *
 * Return: number of leaves in the tree, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_size;
	size_t right_size;
	size_t tree_leaves;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_size = binary_tree_leaves(tree->left);
	right_size = binary_tree_leaves(tree->right);

	tree_leaves = (left_size + right_size);

	return (tree_leaves);
}
