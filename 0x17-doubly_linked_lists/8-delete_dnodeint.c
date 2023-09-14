#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given index
 * @head: Pointer to a pointer to the head of a doubly linked list
 * @index: Index of the node to delete, starting from 0
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;

	tmp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	while (head && index)
	{
		tmp = tmp->next;
		index--;
	}

	if (!tmp)
		return (-1);

	tmp->prev->next = tmp->next;

	if (tmp->next)
		tmp->next->prev = tmp->prev;

	if (tmp->prev)
		tmp->prev->next = tmp->next;
	else
		*head = tmp->next;

	free(tmp);
	return (1);
}
