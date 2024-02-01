#include "binary_trees.h"

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
  * binary_tree_balance - measures the balance factor
  * @tree: a pointer to the root node of the tree
  * Return: if tree is NULL return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left)
		- binary_tree_height(tree->right));
}
