#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: return a pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else if (node->parent->right == node)
		return (node->parent->left);

	return (NULL);
}
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: A pointer to the node find the uncle
 *
 * Return: a pointer to the uncle node, or NULL if node is NULL
 * if parent is NULL, or if node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
