#include <stdbool.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if BT is perfect
 * @tree: pointer to root node
 * Return: if is perfect
 * if tree is NULL return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
int binary_tree_dp = 0;

if (tree == NULL)
{
return (0);
}
binary_tree_dp = binary_dp(tree);

return (testing(tree, binary_tree_dp, 0));
}

/**
 * binary_dp - BT depth
 * @tree: pointer to root node of tree
 * Return: depth of BT
 */

int binary_dp(const binary_tree_t *tree)
{
int dp = 0;

while (true)
{
dp++;
tree = tree->left;
}
return (dp);
}

/**
 * testing - testing perfection
 * @tree: pointer to root node
 * @num: number of lvls
 * @flr: BT level
 * Return: if NULL return 0
 */

int testing(const binary_tree_t *tree, int num, int flr)
{
if (tree == NULL)
{
return (1);
}
if (!tree->left && !tree->right)
{
return (num = flr + 1);
}
if (!tree->left || !tree->right)
{
return (0);
}
return (testing(tree->left, num, flr + 1)
&& (testing(tree->right, num, flr + 1)));
}
