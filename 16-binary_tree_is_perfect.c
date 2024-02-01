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
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:is a pointer to the root node
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right = 1 + binary_tree_height(tree->right);

	if (left > right)
		return (left);
	else
		return (right);
}
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
