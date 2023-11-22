#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * @head: pointer to linked lists
 * @idx: index of the list
 * @n: value
 *
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *pure;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	pure = *head;
	while (i != idx - 1 && pure != NULL)
	{
		pure = pure->next;
		i++;
	}

	if (i == idx - 1 && pure != NULL)
	{
		new_node->next = pure->next;
		pure->next = new_node;
		return (new_node);
	}
	return (NULL);
}
