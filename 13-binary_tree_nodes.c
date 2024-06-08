#include "binary_trees.h"
/**
 * binary_tree_nodes - Count the number of nodes with at least 1 child
 * @tree: pointer to root node of the tree to count
 * Return: no. of nodes
 * NULL pointer is not a node
 * if tree is NULL return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t number_of_nodes = 0;

if (tree == NULL)
{
return (0);
}
else if (tree->left || tree->right)
{
number_of_nodes = (binary_tree_nodes(tree->left)
+ 1 + binary_tree_nodes(tree->right));
}
return (number_of_nodes);
}
