#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 * Return: the height of a binary tree. If tree is NULL, returns 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	/*If the tree is empty, return 0*/
	if (tree == NULL)
		return (0);

	/*Recursively compute the height of the left and right subtrees*/
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/*Return the maximum height of the two subtrees plus 1 for the*/
	/*current node*/
	return ((left_height > right_height ? left_height : right_height) + 1);
}
