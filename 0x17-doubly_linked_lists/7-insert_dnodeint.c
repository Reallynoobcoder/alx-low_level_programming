#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A pointer to a pointer to the head of the doubly linked list.
 * @idx: The index at which the new node should be inserted.
 * @n: The integer data to be stored in the new node.
 *
 * Return: A pointer to the newly inserted node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *middle, *tmp;
	unsigned int i = 0;

	if (h == NULL || idx == 0)
		return (add_dnodeint(h, n));

	tmp = *h;

	middle = malloc(sizeof(dlistint_t));
	if (middle == NULL)
		return (NULL);

	middle->n = n;

	while (tmp)
	{
		if (i == idx)
		{
			middle->prev = tmp->prev;
			middle->next = tmp;
			if (tmp->prev)
				tmp->prev->next = middle;
			tmp->prev = middle;
			return (middle);
		}
		tmp = tmp->next;
		i++;
	}

	if (i == idx)
	{
		free(middle);
		return (add_dnodeint_end(h, n));
	}

	free(middle);
	return (NULL);
}
