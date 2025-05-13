#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: Pointer to the node to find the sibling of.
 *
 * Return: Pointer to the sibling node, or NULL if no sibling or input is NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node || !node->parent)
return (NULL);

/* Check if node is the left child, return right sibling */
if (node == node->parent->left)
return (node->parent->right);

/* Otherwise, node is right child, return left sibling */
return (node->parent->left);
}
