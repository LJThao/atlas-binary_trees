#include "binary_trees.h"

/**
 * binary_tree_depth - function that measure the depth of a node
 * @tree: pointer to the node to measure the depth
 * Return: 0, if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *node = NULL;

	if (!tree)
		return (0);
	node = tree->parent;

	while (node)
	{
		depth += 1;
		node = node->parent;
	}
	return (depth);
}
