#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of the list
 * @head: head of the list
 * @index: which node to stop at
 * Return: pointer to the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	if (head == NULL)
		return (NULL);

	return (head);
}
