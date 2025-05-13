#include "binary_trees.h"
#include <stdio.h>

/**
 * height - Measures the height of a binary tree.
 * @tree: Pointer to the node to measure the height from.
 *
 * Return: Height of the tree. If tree is NULL, returns 0.
 */
int height(const binary_tree_t *tree)
{

int left_height, right_height;

/* Check if the tree is NULL = no height */
if (!tree)
return (0);

/* Recursively calculate the height of left and right subtrees */
left_height = height(tree->left);
right_height = height(tree->right);

/* Return the greater height then add 1 for the node.*/
return ((left_height > right_height ? left_height : right_height) +1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node.
 *
 * Return: Balance factor (left height - right height).
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left, right;

/* If the tree is NULL, balance factor = 0 */
if (!tree)
return (0);

left = height(tree->left);
right = height(tree->right);

printf("Left Height: +%d\n", left);
printf("Right Height: -%d\n", right);

/* Return the difference between left and right subtree heights */
return (left - right);
}
