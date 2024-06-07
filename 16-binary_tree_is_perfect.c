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

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;
	size_t size;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	return (size == (size_t)((1 << (height + 1)) - 1));
}
