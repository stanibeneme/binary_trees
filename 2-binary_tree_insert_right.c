#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the
 *					right-child of a new node
 *
 * @parent: is a pointer to node to insert the right-child in
 * @value: is the value to be stored in the new node
 *
 * Description: If parent node already has a right-child, new node
 *				must take its place, and the old right-child must
 *				be set as the right-child of the new node.
 *
 * Return: a pointer to the new node, or
 *			NULL on failure or
 *			if parent is NULL
 * Project by Stanley Ibeneme
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;
	if (new->right)
		new->right->parent = new;
	return (new);
}
