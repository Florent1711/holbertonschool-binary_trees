#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise. If tree is NULL, returns 0.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	/*If tree is NULL, it's empty, so it's not full*/
	if (tree == NULL)
		return (0);

	/*If a node has no children, it's a full node*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/*If a node has both children, checking for grandchildrens xd*/
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/*If a node has only one child (left or right), it's not full*/
	return (0);
}
