#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_delete - Deletes an entire binary tree
* @tree: Pointer to the root node of the tree to delete
*
* This function recursively deletes all nodes in a binary tree.
*/
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
return;

/* Recursively delete the left and right subtrees */
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);

/* Finally, free the current node */
free(tree);
}
