#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at index
 * @head: head of the list
 * @idx: location to insert node
 * @n: value of the inserted node
 * Return: pointer to head of list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *insert = malloc(sizeof(listint_t));
	listint_t *curr;

	if (head == NULL)
		return (NULL);

	if (insert == NULL)
		return (NULL);

	insert->n = n;

	if (idx == 0)
	{
		insert->next = *head;
		*head = insert;
		return (insert);
	}
	curr = *head;

	for (i = 1; i < idx && curr; i++)
	{
		curr = curr->next;
	}
	if (curr == NULL)
	{
		free(insert);
		return (NULL);
	}
	insert->next = curr->next;
	curr->next = insert;
	return (insert);
}
