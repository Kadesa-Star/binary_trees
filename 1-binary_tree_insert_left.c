#include "binary_trees.h"


/**
 * binary_tree_insert_left - inserting a node to the left-child
 * @parent: pointer to node to insert left-child in
 * @value: value to store the new node
 *
 * Return: pointer to the created node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;


	if (parent == NULL)
		return (NULL);


	new_node = malloc(sizeof(binary_tree_t));
	if (parent == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;
	new_node->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = new_node;

	parent->left = new_node;


	return (new_node);
}
