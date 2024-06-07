#include "binary_trees.h"


/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to root node of the tree to measure height
 *
 * Return: if tree is NULL return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root of node of the tree
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;


	if (tree == NULL)
		return (0);

	left_height = (tree->left) ? (int)binary_tree_height(tree->left) + 1 : 0;
	right_height = (tree->right) ? (int)binary_tree_height(tree->right) + 1 : 0;

	return (left_height - right_height);
}
