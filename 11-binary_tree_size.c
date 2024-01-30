#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree
 * Return: 0 if null otherwise the measures
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (!tree)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (right + 1 + left);
}
