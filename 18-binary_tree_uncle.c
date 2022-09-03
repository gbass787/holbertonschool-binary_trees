#include "binary_trees.h"
/**
 * binary_tree_uncle - finds uncle of a node
 *
 * @node: pointer to node to find sibling
 *
 * Return: pointer to sibling node, NULL if node has no sibling
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if ((!node) || !(node->parent) || !(node->parent->parent))
	{
		return (NULL);
	}
	parent = node->parent->parent;
	if (parent->left && parent->right)
	{
		if (parent->left == node->parent)
		{
			return (parent->right);
		}
		return (parent->left);
	}
	return (NULL);
}
