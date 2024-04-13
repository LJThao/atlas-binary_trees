#include "binary_trees.h"

/**
 * binary_tree_insert_right - function inserts a node as the right-child
 * @parent: pointer to the node
 * @value: value to store the new node
 * Return: a pointer to the created node or NULL if fail
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	if (parent == NULL)
	{
		free(node);
		return (NULL);
	}

	if (parent->right != NULL)
	{
		node->right = parent->right;
		node->right->parent = node;
	}
	parent->right = node;
	return (node);
}
