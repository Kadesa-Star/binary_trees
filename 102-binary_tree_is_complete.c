#include "binary_trees.h"
/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	binary_tree_t **queue, *node;
	size_t front, rear, size;
	bool flag;

	front = 0, rear = 0, size = 1024, flag = false;

	if (tree == NULL)
		return (0);
	queue = malloc(size * sizeof(binary_tree_t *));
	if (queue == NULL)
		return (0);
	queue[rear++] = (binary_tree_t *)tree;
	while (front < rear)
	{
		node = queue[front++];

		if (node == NULL)
		{
			flag = true;
		}
		else
		{
			if (flag)
			{
				free(queue);
				return (0);
			}
			if (rear >= size)
			{
				size *= 2;
				queue = realloc(queue, size * sizeof(binary_tree_t *));
				if (queue == NULL)
					return (0);
			}
			queue[rear++] = node->left;
			queue[rear++] = node->right;
		}
	}
	free(queue);
	return (1);
}
