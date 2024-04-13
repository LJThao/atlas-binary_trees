#include "binary_trees.h"

size_t height(size_t x, size_t y);

/**
 * binary_tree_height - function that measures the height of the tree
 * @tree: pointer to the root node to measure the ht
 * Return: 0, if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	return (height(binary_tree_height(tree->left), binary_tree_height(tree->right)) + 1);
}

/**
 * height - returns the two numbers
 * @x: first
 * @y: second
 * Return: x and y
 */

size_t height(size_t x, size_t y)
{
	if (x > y)
		return (x);
	return (y);
}
