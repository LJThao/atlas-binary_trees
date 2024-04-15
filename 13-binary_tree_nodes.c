#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the node with 1 child
 * @tree: pointer to the root node of the tree to count the # of nodes
 * Return: 0, if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	nodes = 1 + binary_tree_nodes(tree->left) +
					 binary_tree_nodes(tree->right);
	return (nodes);
}
