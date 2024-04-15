#include "binary_trees.h"

int measure_height(const binary_tree_t *tree);
int max(int x, int y);

/**
 * binary_tree_balance - function that measures the balance factor
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0, if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0, left, right;

	if (!tree)
		return (0);
	left = measure_height(tree->left);
	right = measure_height(tree->right);
	balance = left - right;
	return (balance);
}

/**
 * measure_height - measureing the height of the tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of a binary tree
 */

int measure_height(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);
	return (max(measure_height(tree->left),
				measure_height(tree->right)) + 1);
}

/**
 * max - returns the max of x and y
 * @x: first integer
 * @y: second integer
 * Return: max x and  y
 */

int max(int x, int y)
{
	if (x > y)
		return (x);
	return (y);
}
