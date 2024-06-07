#include "binary_trees.h"


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

	left_height = (tree->left) ? binary_tree_height(tree->left) : -1;
	right_height = (tree->right) ? binary_tree_height(tree->right) : -1;

	return (left_height - right_height);
}
