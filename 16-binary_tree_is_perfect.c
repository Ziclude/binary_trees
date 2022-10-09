#include "binary_trees.h"

/**
 * binary_tree_height - Measure bt height
 * @tree: Pointer to root node
 * Return: height or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t dl, dr, ht;
if (tree == NULL)
return (0);
dl = binary_tree_height(tree->left);
dr = binary_tree_height(tree->right);
ht = ((dl > dr) ? dl : dr) + 1;
return (ht);
}

/**
 * binary_tree_is_perfect - Check if bt's perfect
 * @tree: pointer to root node
 * Return: 1 if perfect, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if ((tree->left == NULL) && (tree->right == NULL))
return (1);
if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
return (binary_tree_is_perfect(tree->left) &&
binary_tree_is_perfect(tree->right));
return (0);
}
