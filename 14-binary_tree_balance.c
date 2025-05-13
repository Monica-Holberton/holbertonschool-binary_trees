#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node.
 *
 * Return: Balance factor (left height - right height), or 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left, right;

if (!tree)
return (0);

left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);

printf("Left Height: +%d\n", left);
printf("Right Height: -%d\n", right);

return (left - right);
}
