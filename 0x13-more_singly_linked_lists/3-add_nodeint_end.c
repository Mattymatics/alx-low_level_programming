#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds a new node
 * @head: pointer to linked lists
 * @n: data to add
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *news;
	listint_t *old = *head;

	news = malloc(sizeof(listint_t));

	if (news == NULL)
		return (NULL);
	news->n = n;

	news_mode->next = NULL;

	if (*head == NULL)
	{
		*head = news;
		return (news);
	}
	while (old->next != NULL)
		old = old->next;
	old->next = news;
	return (news);
}
