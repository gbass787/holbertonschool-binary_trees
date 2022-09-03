#include "binary_trees.h"
/**
* binary_tree_leaves - counts the leaves of a binary tree
*
* @tree: pointer to root node of the tree to count the number of
* leaves
*
* Return: amount of leaves, 0 otherwise
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}
