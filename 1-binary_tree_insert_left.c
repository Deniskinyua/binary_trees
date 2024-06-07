#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_insert_left - Insert a node as the left-child of another node
 * @parent: parent
 * @value: value
 * Return:  pointer to created node or NULL on failure or if parent==NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *created_node;

if (parent == NULL)
{
return (NULL);
}
created_node = binary_tree_node(parent, value);
if (created_node == null)
{
return (NULL);
}
if (parent->left != NULL)
{
created_node->left = parent->left;
parent->left->parent = created_node;
}
parent->left = created_node;
return (created_node);
}
