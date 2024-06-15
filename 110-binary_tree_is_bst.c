#include "binary_trees.h"
/**
 *is_bst_helper - helper function to check if tree is bst
 * @tree: a pointer to the root node of the tree to check
 * @min: the minimum allow value for the node
 * @max: the maximum allowed value for the node
 *
 * Return: 1 if the tree is a valid BST, 0 otherwise
 */
int is_bst_helper(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n <= min || tree->n >= max)
		return (0);

	return (is_bst_helper(tree->left, min, tree->n) &&
		is_bst_helper(tree->right, tree->n, max));
}

/**
 * binary_tree_is_bst - checks if binary tree is a valid BST
 * @tree: a pointe r to the root node of the tree to check
 *
 * Return: 1 if tree is a vlaid BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_bst_helper(tree, INT_MIN, INT_MAX));
}
