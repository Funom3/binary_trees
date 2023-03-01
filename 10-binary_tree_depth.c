#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in binary tree
 *
 * @tree: the node
 *
 * Return: always 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int d = 0;

	if (!tree)
		return (0);
	if (tree->parent)
	{
		d = binary_tree_depth(tree->parent);
		d += 1;
	}
	return (d);
}
