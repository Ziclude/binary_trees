#include "binary_trees.h"

/**
 * binary_tree_uncle - Find bt's uncle
 * @node: Pointer to node to find
 * Return: Pointer to node's uncle else NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent->parent == NULL)
return (NULL);
if (node->parent->parent->left == node->parent)
return (node->parent->parent->right);
if (node->parent->parent->right == node->parent)
return (node->parent->parent->left);
return (NULL);
}
