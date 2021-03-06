#include "binary_trees.h"
/**
 * binary_tree_insert_left-left node
 * @parent:Pointer
 * @value: Value
 * Return: Node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *l_node;

	if (!parent)
	{
		return (NULL);
	}
	l_node = binary_tree_node(parent, value);
	if (!l_node)
		return (NULL);
	if (parent->left != NULL)
	{
		l_node->left = parent->left;
		l_node->left->parent = l_node;

	}
	parent->left = l_node;

	return (l_node);
}
