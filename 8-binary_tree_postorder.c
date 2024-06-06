#include "binary_trees.h"


/**
 * binary_tree_postorder - func to traverse tree by inorder traversal
 * @tree: pointer to the root node of tree to traverse
 * @func: pointer to a function call for each node
 *
 * Description: if tree or func is NULL, do nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);

	binary_tree_postorder(tree->right, func);

	func(tree->n);
}
