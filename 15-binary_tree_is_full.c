#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: pointer to root node of tree to check
 *
 * Return: 1 if full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	full = binary_tree_is_full(tree->right);
	if (full == 0)
		return (0);
	full = binary_tree_is_full(tree->left);
	if (full == 0)
		return (0);

	return (1);
}
