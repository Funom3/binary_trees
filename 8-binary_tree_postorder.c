#include "binary_trees.h"
/**
 * binary_tree_postorder - goes to binary tree using post-order traversal
 *
 * @tree: the node
 *
 * @func: the function to print
 *
 * Return: always 0
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
	func(tree->n);
}
