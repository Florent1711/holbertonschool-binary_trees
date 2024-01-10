#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 * Return: the depth of a binary tree. If tree is NULL, returns 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	/*Base case: If the node is NULL, its depth is 0*/
	if (tree == NULL)
		return (0);

	/*Traverse up to the root node, counting the steps (depth)*/
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
