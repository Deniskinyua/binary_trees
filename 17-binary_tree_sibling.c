#include "binary_trees.h"
/**
 * binary_tree_sibling - Find sibling of a node
 * @node: pointer to the node to find sibling
 * Return: pointer to the sibling node
 * if node == NULL or parent == NULL, return  NULL
 * if node has no sibling, return NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
{
return (NULL);
}
if (node->parent->right == node && node->parent->left)
{
return (node->parent->left);
}
if (node->parent->left == node && node->parent->right)
{
return (node->parent->right);
}
return (NULL);
}
