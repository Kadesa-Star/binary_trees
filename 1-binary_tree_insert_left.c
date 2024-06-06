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


	new_node = binary_tree_node(parent, value);
	if (parent == NULL)
		return (NULL);


	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	parent->left = new_node;


	return (new_node);
}
