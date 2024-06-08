#include "binary_trees.h"
/**
 * binary_tree_height - heaight of BT
 * @tree: Pointer to root of binary tree
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left = 0, right = 0;

if (tree == NULL)
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
/**
 * binary_tree_balance - Measures balance factor
 * @tree: pointer to root of BT
 * Return: number
 */

int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
