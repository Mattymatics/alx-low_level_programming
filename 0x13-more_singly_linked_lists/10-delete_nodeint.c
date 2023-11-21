#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that deletes nodes
 * @head: pointer to linked list
 * @index: index of the node
 * Return: 1 if success, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pure, *impure;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		pure = *head;
		*head = (*head)->next;
		free(pure);
		return (1);
	}
	pure = *head;
	while (i != index - 1 && pure->next != NULL)
	{
		pure = pure->next;
		i++;
	}
	if (i == index - 1 && pure->next != NULL)
	{
		impure = pure->next;
		pure->next = impure->next;
		free(impure);
		return (1);
	}
	return (-1);
}
