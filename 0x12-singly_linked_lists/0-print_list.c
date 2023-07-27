#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list.
 *
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
*/

size_t print_list(const list_t *h)
{
	unsigned int a = 0;
	const list_t *c;

	for (c = h; c != NULL; c = c->next)
	{
		if (c->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", c->len, c->str);

		a++;
	}
	return (a);
}
