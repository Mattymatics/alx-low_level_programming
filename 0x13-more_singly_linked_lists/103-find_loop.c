#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * find_listint_loop - function that finds liip in a list
 * @head: pointer to linked list
 * Return: address of node
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	if (head == NULL || head->next == NULL)
		return (NULL);
	slow = slow->next;
	fast = fast->next->next;

	while (fast && fast->next)
	{
		if (slow == fast)
			break;
		slow = slow->next;
		fast = fast->next->next;
	}
	if (slow != fast)
		return (NULL);
	slow = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (slow);
}
