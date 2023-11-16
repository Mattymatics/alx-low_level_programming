#include "lists.h"

/**
 * free_list - functions that frees a list
 * @head: head of list
 * Return: none
 */

void free_list(list_t *head)
{
	list_t *c_node;

	while ((c_node = head) != NULL)
	{
		head = head->next;
		free(c_node->str);
		free(c_node);
	}
}
