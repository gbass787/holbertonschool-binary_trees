#include "binary_trees.h"
/**
 * tree_height - calculates height of tree
 *
 * @tree: tree to count
 *
 * Return: height
 */

int tree_height(const binary_tree_t *tree)
{
	int left_idx = 0, right_idx = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_idx += tree_height(tree->left) + 1;
	right_idx += tree_height(tree->right) + 1;

	if (left_idx > right_idx)
	{
		return (right_idx);
	}
	return (left_idx);
}
/**
 * binary_tree_is_perfect - measures if binary tree is perfect
 *
 * @tree: tree to measure
 *
 * Return: int representation of balance
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_idx, right_idx;

	if (!tree)
		return (0);

	left_idx = tree_height(tree->left);
	right_idx = tree_height(tree->right);
	return (left_idx == right_idx);
}
