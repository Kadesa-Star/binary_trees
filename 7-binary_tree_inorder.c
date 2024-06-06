#include "binary_trees.h"


/**
 * binary_tree_inorder - function to through tree by inorder traversal
 * @tree: pointer to the root node of tree to traverse
 * @func: pointer to a function call for each node
 *
 * Description: if tree or func is NULL, do nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);

	func(tree->n);

	binary_tree_inorder(tree->right, func);
}
