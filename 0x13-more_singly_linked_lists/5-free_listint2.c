#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets the head pointer to NULL.
 *
 * @head: Pointer to the head of the linked list.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}

