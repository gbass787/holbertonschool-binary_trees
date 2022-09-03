#include "binary_trees.h"
/**
 * binary_tree_sibling - finds sibling node
 *
 * @node: pointer to node to find sibling
 *
 * Return: pointer to sibling node, NULL if node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !(node->parent))
	{
		return (NULL);
	}
	parent = node->parent;
	if (parent->left && parent->right)
	{
		if (parent->left == node)
		{
			return (parent->right);
		}
		return (parent->left);
	}
	return (NULL);
}
