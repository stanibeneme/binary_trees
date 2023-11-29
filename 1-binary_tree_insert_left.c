#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts one node as left-child of another node
 *
 * @parent: is a pointer to the parent node
 * @value:  is the value to be stored in the new node
 *
 * Description - If parent already has a left-child, the new node must
 *				take a place, and the old left-child must be set as
 *				the left-child of new node.
 *
 * Return: a pointer to the new node, or NULL on failure or if
 *			parent is NULL
 * project by Stanley Ibeneme
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = parent->left;
	parent->left = new;
	if (new->left)
		new->left->parent = new;
	return (new);
}
