#include "binary_trees.h"

size_t get_depth(const binary_tree_t *tree);
int perfect(const binary_tree_t *tree, size_t level, size_t depth);

/**
 * binary_tree_is_perfect - function that checks if its perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0, if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth = get_depth(tree);

	if (!tree)
		return (0);
	return (perfect(tree, 0, depth));
}

/**
 * perfect - checks the tree to see for perfection
 * @tree: pointer
 * @node1: 1 node
 * @node2: 2 node
 * Return: 0, if tree is NULL
 */

int perfect(const binary_tree_t *tree, size_t level, size_t depth)
{
	if (!tree->left && !tree->right)
		return (node1 == node2);
	if (!tree->left || !tree->right)
		return (0);
	node1 += 1;
	return (perfect(tree->left, node1, node2) &&
			perfect(tree->right, node1, node2));
}

/**
 * get_ depth - measures the node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: 0, if tree is NULL
 */

size_t get_depth(const binary_tree_t *tree)
{
	binary_tree_t *node = (binary_tree_t *)tree;
	size_t depth = 0;

	while (node)
	{
		depth += 1;
		node = node->left;
	}
	return (depth - 1);
}
