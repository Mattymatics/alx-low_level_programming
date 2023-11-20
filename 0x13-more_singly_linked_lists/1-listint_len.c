#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that returns no. of elements.
 * @h: pointer to linked list
 * Return: no of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
