#include "binary_trees.h"

/**
 * enqueue - Adds a node to the end of the queue
 * @queue: The queue
 * @node: The node to add
 * @size: The size of the queue
 *
 * Return: The new size of the queue
 */
size_t enqueue(binary_tree_t ***queue, binary_tree_t *node, size_t size)
{
	binary_tree_t **new_q;
	size_t i;

	new_q = malloc((size + 1) * sizeof(binary_tree_t *));
	if (new_q == NULL)
		return (size);

	for (i = 0; i < size; i++)
		new_q[i] = (*queue)[i];

	new_q[size] = node;
	free(*queue);
	*queue = new_q;
	return (size + 1);
}
/**
 * dequeue - Removes the first node from the queue
 * @queue: The queue
 * @size: The size of the queue
 *
 * Return: The new size of the queue
 */
size_t dequeue(binary_tree_t ***queue, size_t size)
{
    binary_tree_t **new_q;
    size_t i;

    if (size == 0)
        return (0);

    for (i = 0; i < size - 1; i++)
        (*queue)[i] = (*queue)[i + 1];

    new_q = malloc((size + 1) * sizeof(binary_tree_t *));
    if (new_q == NULL)
        return (size - 1);

    for (i = 0; i < size - 1; i++)
        new_q[i] = (*queue)[i];
 
    free(*queue);
    *queue = new_q;
    return (size - 1);
}
/**
 * binary_tree_levelorder - Goes through a binary tree using level-order traversal
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node.
 *        The value in the node must be passed as a parameter to this function.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    binary_tree_t **queue = NULL;
    size_t queue_size = 0;
    binary_tree_t *node;

    if (tree == NULL || func == NULL)
        return;

    queue_size = enqueue(&queue, (binary_tree_t *)tree, queue_size);
    while (queue_size > 0)
    {
        node = queue[0];

        func(node->n);

        if (node->left != NULL)
            queue_size = enqueue(&queue, node->left, queue_size);
        if (node->right != NULL)
            queue_size = enqueue(&queue, node->right, queue_size);

        queue_size = dequeue(&queue, queue_size);
    }
    free(queue);
}
