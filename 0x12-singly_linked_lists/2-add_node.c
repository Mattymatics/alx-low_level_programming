#include "lists.h"

/**
 * add_node - function that adds node at beginning
 * @head: head of the node
 * @str: string
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nnode;
	unsigned int i, count = 0;

	nnode = malloc(sizeof(list_t));
	if (nnode == NULL)
		return (NULL);
	nnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	nnode->len = count;
	nnode->next = *head;
	*head = nnode;

	return (*head);
}
