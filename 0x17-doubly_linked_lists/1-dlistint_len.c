#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list.
 * @h: Pointer to the head of the list.
 *
 * Description: This function counts the number of nodes in a doubly linked
 * list starting from the given head pointer.
 *
 * Return: The number of nodes (elements) in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
