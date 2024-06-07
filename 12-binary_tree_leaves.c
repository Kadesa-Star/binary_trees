#include "binary_trees.h"


/**
 * binary_tree_leaves - function that counts leaves
 * @tree: pointer to root of the node
 *
 * Return: if tree is NULL return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t a;
	size_t b;


	if (tree == NULL)
		return (0);


	if (tree->left == NULL && tree->right == NULL)
		return (1);


	a = binary_tree_leaves(tree->left);
	b = binary_tree_leaves(tree->right);


	return (a + b);
}
