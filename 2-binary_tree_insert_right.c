#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert binary node right of parent
 * @parent: node to use as the parent of the new node
 * @value: value to add to new node
 *
 * Return: new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *node;
if (parent == NULL)
return (NULL);
node = malloc(sizeof(binary_tree_t));
if (node == NULL)
return (NULL);
node->parent = parent;
node->n = value;
node->left = NULL;
node->right = NULL;
if (parent->right != NULL)
{
parent->right->parent = node;
node->right = parent->right;
}
parent->right = node;
return (node);
}
