#include "binary_trees.h"
/**
 * binary_tree_node - pointer to binary_tree
 * @parent: pointer to the parent node to create
 * @value: the value to put in the new node
 *
 * Return: pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = new_node->right = NULL;


	return (new_node);
}
