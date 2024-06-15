#include "binary_trees.h"
/**
 * binary_tree_rotate_right - perfroms a right rotation on a binary tree
 * @tree: the pointer to the root node of the tree to rotate
 *
 * Return: a pointer to the new root node of the tree after rotation
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root;
	binary_tree_t *right_subt;

	if (tree == NULL || tree->left == NULL)
		return (tree);

	new_root = tree->left;
	right_subt = new_root->right;

	new_root->right = tree;
	tree->left = right_subt;

	if (right_subt != NULL)
		right_subt->parent = tree;

	new_root->parent = tree->parent;
	tree->parent = new_root;

	return (new_root);
}
