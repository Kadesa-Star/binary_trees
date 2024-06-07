#include "binary_trees.h"


/**
 * binary_tree_nodes - counts the nodes with atleast 1 child
 * @tree: pointer to root of the node
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t a;
	size_t b;


	if (tree == NULL)
		return (0);


	a = binary_tree_nodes(tree->left);
	b = binary_tree_nodes(tree->right);


	if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + a + b);
	}
	return (a + b);
}
