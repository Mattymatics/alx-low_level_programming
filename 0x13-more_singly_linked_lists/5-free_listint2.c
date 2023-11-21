#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - a function that frees a linked list
 * @head: pointer to linked list
 * Return: 0
 */

void free_listint2(listint_t **head)
{
	listint_t *old_variable;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		old_variable = *head;
		*head = (*head)->next;
		free(old_variable);
	}
}
