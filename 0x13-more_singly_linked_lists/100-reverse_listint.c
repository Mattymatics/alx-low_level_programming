#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - function that reverses a linked list
 * @head: pointer to linked list
 * Return: pointer to node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *perm = *head;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	if (perm->next == NULL)
	{
		*head = perm;
		return (*head);
	}
	else if (*head && (*head)->next)
	{
		listint_t *pure = *head;
		*head = (*head)->next;
		reverse_listint(head);
		pure->next->next = perm;
		pure->next = NULL;
	}
	return (*head);
}
