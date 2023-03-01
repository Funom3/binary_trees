#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of the binary tree
 *
 * @tree: the node
 *
 * Return: always 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return;
	if (tree->left)
	{
		left = binary_tree_height(tree->left);
		left += 1;
	}
	if (tree->right)
	{
		right = binary
