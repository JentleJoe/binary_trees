#include "binary_trees.h"

binary_tree_t *createChild(binary_tree_t *parent, int n, int isLeft)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	newNode->parent = parent;
	newNode->n = n;

	/* To add left Node */
	if (isLeft)
	{
		newNode->right = NULL;
		if (parent->left == NULL)
		{
			newNode->left = NULL;
			parent->left = newNode;
		}
		else
		{
			newNode->left = parent->left;
			parent->left = newNode->left;
		}
	}
	/* To add right Node */
	else
	{
		newNode->left == NULL;
		if (parent->right == NULL)
		{
			newNode->right = NULL;
			parent->right = newNode;
		}
		else
		{
			newNode->right = parent->right;
			parent->right = newNode->right;
		}
	}

	return (newNode);
}
