#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;
	int balance = 0;

	if (tree == NULL)
	return (0);

	if (tree->left == NULL && tree->right == NULL)
	return (0);

	left_height = binary_tree_balance(tree->left);
	right_height = binary_tree_balance(tree->right);

	if (left_height == right_height)
	balance++;
	else if (left_height > right_height)
	balance -= (left_height - right_height);
	else
	balance += (left_height + right_height);
	return (balance);
}	
