#include "binary_trees.h"
/**
* binary_tree_size - measures the size of a binary tree
*
* @tree: pointer to root node of the tree to measure size
*
* Return: size of tree, 0 otherwise
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	int right, left;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	right = binary_tree_size(tree->right);
	left = binary_tree_size(tree->left);

	return (right + left + 1);
}
