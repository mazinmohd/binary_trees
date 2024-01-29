#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	binary_tree_t *tmp;

	if (!parent || !value)
	{
		return (NULL);
	}
	new_node->n = value;
	tmp = parent->left;

	parent->left = new_node;
	new_node->parent = parent;

	if (tmp)
	{
		tmp->parent = new_node;
		new_node->left = tmp;
	}
	return (new_node);
}