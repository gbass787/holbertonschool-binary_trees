#include "binary_trees.h"
/**
 * tree_height - measures the height of a binary tree
 *
 * @tree: pointer to root node of tree to measure height
 *
 * Return: height, if tree is NULL it must return 0
 */
size_t tree_height(const binary_tree_t *tree)
{
	int right_height;
	int left_height;

	if (tree == NULL)
		return (0);

	left_height = tree_height(tree->left) + 1;
	right_height = tree_height(tree->right) + 1;

	if (right_height > left_height)
		return (right_height);
	else
		return (left_height);

	return (0);
}
/**
* binary_tree_balance - measures the balance factor of a binary tree
*
* @tree: pointer to root node of tree to measure the balance factor
*
* Return: the balance factor, if tree is NULL it must return 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int rh, lh;

	if (tree == NULL)
		return (0);

	lh = tree_height(tree->left);
	rh = tree_height(tree->right);

	return (lh - rh);
}
