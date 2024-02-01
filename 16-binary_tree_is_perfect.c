#include "binary_trees.h"
/**
  * binary_tree_is_perfect - checks if a binary tree is perfect
  * @tree: a pointer to the root node
  * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0, perfect = 0;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	perfect = (1 << (height + 1)) - 1;

	if (perfect == binary_tree_size(tree))
		return (1);
	else
		return (0);
}
