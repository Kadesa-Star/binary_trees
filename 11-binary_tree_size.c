#include "binary_trees.h"


/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointe to the root node of the tree
 *
 * Return: if tree is NULL return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t a;
	size_t b;


	if (tree == NULL)
		return (0);


	a = binary_tree_size(tree->left);
	b = binary_tree_size(tree->right);


	return (a + b + 1);
}
