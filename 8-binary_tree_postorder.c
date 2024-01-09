#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree using post-order
 *                         traversal
 * @tree: noeud à tester
 * @func: noeud à tester
 * Return: nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
{
	if (tree == NULL || func == NULL)
		return;
	/*Traverse the left subtree in post-order*/
	binary_tree_postorder(tree->left, func);
	/*Traverse the right subtree in post-order*/
	binary_tree_postorder(tree->right, func);
	/*Apply the function to the current node*/
	func(tree->value);
}
