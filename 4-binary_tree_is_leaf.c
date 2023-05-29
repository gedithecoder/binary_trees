#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if node is leaf
 * @node: node of tree
 *
 * Return: 1 if leaf, 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node && !node->left && !node->right)
return (1);
return (0);
}
