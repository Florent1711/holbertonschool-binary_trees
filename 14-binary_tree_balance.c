#include "binary_trees.h"

/**
 * _binary_tree_height - Computes the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the binary tree.
 */

size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

	left_height = _binary_tree_height(tree->left);
	right_height = _binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_balance - Computes the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 * Return: The balance factor of the binary tree. If tree is NULL, returns 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

	left_height = _binary_tree_height(tree->left);
	right_height = _binary_tree_height(tree->right);

	return ((int)(left_height - right_height));
}
