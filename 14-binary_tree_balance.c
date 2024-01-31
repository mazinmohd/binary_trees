#include "binary_trees.h"
/**
  * binary_tree_balance - measures the balance factor
  * @tree: a pointer to the root node of the tree
  * Return: if tree is NULL return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);
}
