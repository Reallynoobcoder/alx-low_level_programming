#include "lists.h"

/**
 * pop_listint - pops off the head of the list and returns its contents
 * @head: head of the list
 * Return: contents of head
 */

int pop_listint(listint_t **head)
{
	int nm;
	listint_t *temp;

	if (!*head)
		return (0);

	temp = *head;

	nm = temp->n;

	*head = (*head)->next;

	free(temp);

	return (nm);
}
