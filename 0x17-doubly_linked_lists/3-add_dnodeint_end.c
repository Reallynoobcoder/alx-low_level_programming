#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer value to store in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end;
	dlistint_t *tmp = *head;

	end = malloc(sizeof(dlistint_t));
	if (end == NULL)
		return (NULL);

	end->n = n;
	end->next = NULL;
	end->prev = NULL;

	if (*head == NULL)
	{
		*head = end;
		return (end);
	}

	while (tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = end;
	end->prev = tmp;

	return (end);
}
