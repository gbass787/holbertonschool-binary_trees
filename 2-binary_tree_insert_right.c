#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: pointer to node to insert the right-child in
 * @value: value to store in new node
 *
 * Return: created node or NULL if failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr;

	if (parent == NULL)
		return (NULL);

	ptr = binary_tree_node(parent, value);
	if (ptr == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		ptr->right = parent->right;
		parent->right->parent = ptr;
	}
	parent->right = ptr;

	return (ptr);

}
