#include "binary_trees.h"

/**
 * binary_tree_is_leaf - vérifie si un noeud est une feuille
 * @node: noeud à tester
 * Return: 0 ou 1
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	
	return (0);
}