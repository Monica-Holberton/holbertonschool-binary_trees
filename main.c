#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point to test binary_tree_node
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    binary_tree_t *left_child;
    binary_tree_t *right_child;

    root = binary_tree_node(NULL, 98);         /* root with no parent */
    left_child = binary_tree_node(root, 12);   /* left child of root */
    right_child = binary_tree_node(root, 402); /* right child of root */

    root->left = left_child;
    root->right = right_child;

    /* Display node values manually without binary_tree_print */
    printf("Root: %d\n", root->n);
    printf("Left child of root: %d\n", root->left->n);
    printf("Right child of root: %d\n", root->right->n);

    return (0);
}
