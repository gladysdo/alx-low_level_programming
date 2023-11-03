#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_trees_ancestor - Find the lowest common ancestor of two nodes
 * @first: A pointer to the first node
 * @second: A pointer to the second node
 *
 * Return: A pointer to the lowest common ancestor node or NULL if not found.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    if (!first || !second)
        return NULL;

    /* Check if one of the nodes is the ancestor of the other */
    if (first == second || first == second->parent)
        return (binary_tree_t *)first;
    if (second == first->parent)
        return (binary_tree_t *)second;

    /* Recursively search the left and right subtrees for common ancestor */
    binary_tree_t *left_result = binary_trees_ancestor(first, second->parent);
    binary_tree_t *right_result = binary_trees_ancestor(first->parent, second);

    /* If both left and right results are not NULL, the LCA is found */
    if (left_result && right_result)
        return left_result;

    /* If one side is NULL, return the non-NULL result */
    return left_result ? left_result : right_result;
}
