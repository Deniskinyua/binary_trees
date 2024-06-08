# include "binary_trees.h"
/**
 * binary_tree_is_leaf - Check if node is a leaf
 * @node: pointer to node to chekc
 * Return: 1 if node is leaf otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (!node)
{
return (0);
}
if (node->left == NULL && node->right == NULL)
{
return (1);
}
else
{
return (0);
}
}
