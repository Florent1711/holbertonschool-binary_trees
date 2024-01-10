#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 * Return: the height of a binary tree. If tree is NULL, returns 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	/*If the tree is empty, return 0*/
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	/*Recursively compute the height of the left and right subtrees*/
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/*Return the maximum height of the two subtrees plus 1 for the*/
	/*current node*/
	/* transformation de la ternaire */
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
