#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - a function that prints a linked list
 * @head: pointer to linked list
 * Return: number of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	listnode_t *node = NULL;
	size_t count = 0;

	while (!is_in_nodes(nodes, head))
	{
		if (!add_nodeptr(&node, head))
		{
			free_listnode(node);
			exit(98);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;
	}
	if (head != NULL)
		printf("-> [%p] %d\n", (void *)head, head->n);
	free_listnode(node);
	return (count);
}

/**
 * add_nodeptr - function that add a new node
 * @head: pointer to first node
 * @ptr: value of new node
 * Return: address of new wlwmwnt
 */

listnode_t *add_nodeptr(listnode_t **head, const listint_t *ptr)
{
	listnode_t *new_node;

	new_node = malloc(sizeof(listnode_t));
	if (new_node == NULL)
		return (NULL);
	new_node->ptr = (listint_t *)ptr;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 * free_listnode - function frees a node
 * @head: pointer to first node
 */

void free_listnode(listnode_t *head)
{
	if (head == NULL)
		return;
	free_listnode(head->next);
	free(head);
}

/**
 * is_in_nodes - function checks whether an address is in list
 * @head: first node
 * @ptr: address
 * Return: 1 if address in noe, 0 if not
 */

int is_in_nodes(listnode_t *head, const listint_t *ptr)
{
	if (ptr == NULL)
		return (1);
	while (head != NULL)
	{
		if (ptr == head->ptr)
			return (1);
		head = head->next;
	}
	return (0);
}
