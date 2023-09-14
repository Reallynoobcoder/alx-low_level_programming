#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node to retrieve (starting from 0).
 *
 * Return: A pointer to the nth node, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head && index)
	{
		head = head->next;
		index--;
	}
	return ((index == 0) ? head : NULL);
}
