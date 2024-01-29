#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1
 * @tree:pointer to the root node of the tree
 * Return: Nodes counter or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		counter += 1;
	counter += binary_tree_nodes(tree->left);
	counter += binary_tree_nodes(tree->right);
	return (counter);
}
