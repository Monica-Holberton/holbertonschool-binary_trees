#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of nodes with at least 1 child
 * @tree: Pointer to the root node to count the number of nodes with 1 child
 *
 * Return: Number of nodes with at least one child in the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
/* If the tree is NULL, there are no nodes with children */
if (tree == NULL)
return (0);

/* A node with at least one child has either a left or right child or both */
if (tree->left != NULL || tree->right != NULL)
return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

/* If the node has no children, not counted */
return (0);
}
