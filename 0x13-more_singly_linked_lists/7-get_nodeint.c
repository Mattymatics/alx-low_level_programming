#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that returns the node
 * @head: pointer to linked lists
 * @index: index of node
 * Return: nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}
	return (head);
}
