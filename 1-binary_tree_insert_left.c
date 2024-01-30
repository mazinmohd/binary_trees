#include "binary_trees.h"
/**
 * binary_tree_insert_left - nserts a node as the
 * left-child of another node
 * @parent:pointer to the node to insert the left-child in
 * @value:value to store in the new node
 * Return: New node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
