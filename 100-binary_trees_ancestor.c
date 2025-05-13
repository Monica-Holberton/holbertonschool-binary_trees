#include "binary_trees.h"

/**
* binary_trees_ancestor - Finds the lowest common ancestor of two nodes
* @first: Pointer to the first node
* @second: Pointer to the second node
*
* Return: Pointer to the lowest common ancestor node of the two given nodes
*         If no common ancestor is found, returns NULL
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
const binary_tree_t *a, *b;

/* Return NULL if either node is NULL */
if (!first || !second)
return (NULL);

a = first;

/* Traverse from the first node to the root */
while (a)
{
b = second;

/* Check if it matches any ancestor of the second node */
while (b)
{
if (a == b)
return ((binary_tree_t *)a); /* Find the lowest common ancestor */
b = b->parent; /* Move up to the parent of the second node */
}

a = a->parent; /* Move up to the parent of the first node */
}

return (NULL); /* No common ancestor found */
}
