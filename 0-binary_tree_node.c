#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary node
 *
 * @parent: pointer to parent node of the node to be created
 * @value: value to put in node
 *
 * Return: pointer to new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr = NULL;

	if (value == '\0')
		return (NULL);

	ptr = malloc(sizeof(binary_tree_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = value;
	ptr->parent = parent;
	ptr->left = NULL;
	ptr->right = NULL;

	return (ptr);
}
