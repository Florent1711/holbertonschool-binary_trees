#include "binary_trees.h"

/**
 * binary_tree_is_root - verifie si un noeud donné est une racine
 * @node: noeud à vérifier
 * Return: 0 ou 1
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
