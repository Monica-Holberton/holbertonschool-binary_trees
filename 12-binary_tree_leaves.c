#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 *
 * Return: Number of leaf nodes in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
/* If the tree is NULL, there are no leaves */
if (tree == NULL)
return (0);

/* A node is a leaf if it has no left or right child */
if (tree->left == NULL && tree->right == NULL)
return (1);

/* Recursively count the leaves in the left and right */
return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
