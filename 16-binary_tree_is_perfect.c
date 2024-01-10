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
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise. If tree is NULL, returns 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

	left_height = _binary_tree_height(tree->left);
	right_height = _binary_tree_height(tree->right);

	/*Check if the tree is full and left and right heights are equal*/
	if (binaire_tree_is_full(tree) && left_height == right_height)
		return (1);

	return (0);
}

/**
 * binaire_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise. If tree is NULL, returns 0.
 */
int binaire_tree_is_full(const binary_tree_t *tree)
{
	/*If tree is NULL, it's empty, so it's not full*/
	if (tree == NULL)
		return (0);

	/*If a node has no children, it's a full node*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/*If a node has both children, checking for grandchildrens xd*/
	if (tree->left != NULL && tree->right != NULL)
		return (binaire_tree_is_full(tree->left)
				&& binaire_tree_is_full(tree->right));

	/*If a node has only one child (left or right), it's not full*/
	return (0);
}
