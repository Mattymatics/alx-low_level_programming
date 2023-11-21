#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head node
 * @head: pointer to linked list
 * Return: Returns head or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *old_variable;
	int info = 0;

	if (head == NULL || *head == NULL)
		return (0);
	old_variable = *head;

	info = old_variable->n;
	*head = (*head)->next;
	free(old_variable);
	return (info);
}
