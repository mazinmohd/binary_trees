#include "binary_trees.h"
/**
  * binary_tree_depth - measures the depth of a node
  * @tree: pointer to the node to measure the depth
  * Return: the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
