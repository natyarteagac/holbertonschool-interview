#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Function to create a new node of binary tree
 * @parent: Pointer to parent node
 * @value: Value inside node
 * Return: new node if it is created or null if it fails
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
