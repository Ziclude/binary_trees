#include "binary_trees.h"

/**
 * binary_tree_depth - Measure bt depth.
 * @tree: Pointer to root node.
 * Return: If tree null, function return 0, else return depth.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
