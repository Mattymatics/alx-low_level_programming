#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - a function that returns sum
 * @head: pointer to linked list
 * Return: sum of all data of a linked list
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
