#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function that frees a linked list
 * @head: pointer to linked list
 * Return: 0
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);
	free(head);
}
