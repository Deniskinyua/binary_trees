#include "binary_trees.h"
/**
 * binary_tree_delete - Delete binary tree
 * @tree: point to rot of tree to be deleted
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree)
{
binary_tree_delete(tree->right);
binary_tree_delete(tree->left);
free(tree);
}
}
