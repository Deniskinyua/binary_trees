#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert to the right child
 * @parent: pointer to the ode to insert the right-child in
 * @value: value to store in the new node
 *Return: pointer to created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *rightNode;
if (parent == NULL)
{
return (NULL);
}
rightNode = binary_tree_node(parent, value);
if (!rightNode)
{
return (NULL);
}
if (parent->right)
{
rightNode->right = parent->right;
parent->right->parent = rightNode;
}
parent->right = rightNode;
return (rightNode);
}
