#include "binary_trees.h"

/**
* depth - Measures the depth of the leftmost leaf node
* @tree: Pointer to the root node
* Return: Depth of the leftmost leaf
*/
int depth(const binary_tree_t *tree)
{
int d = 0;

while (tree)
{
d++;
tree = tree->left;
}
return (d);
}

/**
* is_perfect_recursive - Helper function to check perfectness
* @tree: Pointer to the current node
* @d: Expected depth
* @level: Current level
* Return: 1 if perfect, 0 otherwise
*/
int is_perfect_recursive(const binary_tree_t *tree, int d, int level)
{
if (!tree)
return (1);

if (!tree->left && !tree->right)
return (d == level + 1);

if (!tree->left || !tree->right)
return (0);

return (is_perfect_recursive(tree->left, d, level + 1) &&
is_perfect_recursive(tree->right, d, level + 1));
}

/**
* binary_tree_is_perfect - Checks if a binary tree is perfect
* @tree: Pointer to the root node
* Return: 1 if perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int d;

if (!tree)
return (0);

d = depth(tree);
return (is_perfect_recursive(tree, d, 0));
}
