#include "binary_trees.h"
/**
 * binary_tree_height - function measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left = 0, right = 0;
if (tree == NULL || (!tree->left && !tree->right))
{
return (0);
}
left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);
if (left > right)
{
return (left + 1);
}
else
{
return (right + 1);
}
}
