# include "binary_trees.h"
/**
 * binary_tree_is_root - Check if a given node is root
 * @node: Pointer to the node to check
 * Return: 1 if node is root, othwerwise 0
 * if node is NULL return 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node && node->parent == NULL)
{
return (1);
}
else
{
return (0);
}
}
