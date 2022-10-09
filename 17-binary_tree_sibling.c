#include "binary_trees.h"

/**
 * binary_tree_sibling - Find sibling of node
 * @node: Pointer to node 
 * Return: Return a pointer to sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);
if (node == node->parent->left)
return (node->parent->right);
if (node == node->parent->right)
return (node->parent->left);
return (NULL);
}
