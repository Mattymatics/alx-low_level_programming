#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function that adds a new node
 * @head: pointer to linked list
 * @n: data to add
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *news;

	news = malloc(sizeof(listint_t));

	if (news == NULL)
		return (NULL);
	news->n = n;
	news->next = *head;
	*head = news;

	return (news);
}
