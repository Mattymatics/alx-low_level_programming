#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - function that frees a linked list
 * @h: pointer to linked list
 * Return: size of the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *perm;
	listnode_t *node = NULL;
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (!is_in_nodes(node, *h))
	{
		if (!add_nodeptr(&node, *h))
		{
			free_listnode(node);
			exit(98);
		}
		perm = *h;
		*h = (*h)->next;
		free(perm);
		count++;
	}
	if (*h != NULL)
		*h = NULL;
	free_listnode(node);
	return (count);
}
