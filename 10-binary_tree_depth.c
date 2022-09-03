#include "binary_trees.h"
/**
* binary_tree_depth - measures the depth of a node in a binary tree
*
* @tree: pointer to node to measure depth
*
* Return: depth of tree, 0 otherwise
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
