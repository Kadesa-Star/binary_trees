#include "binary_trees.h"
/**
 * binary_tree_rotate_left - performs a left rotation on a binary tree
 * @tree: a pointer to the root of the tree to rotate
 *
 * Return: A pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root;
	binary_tree_t *left_subtree;

	if (tree == NULL || tree->right == NULL)
		return (tree);

	new_root = tree->right;
	left_subtree = new_root->left;

	new_root->left = tree;
	tree->right = left_subtree;

	if (left_subtree != NULL)
		left_subtree->parent = tree;

	new_root->parent = tree->parent;
	tree->parent = new_root;

	return (new_root);
}
