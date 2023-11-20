#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all elements of a list.
 * @h: pointer to linked list
 * Return: all elements of the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}

