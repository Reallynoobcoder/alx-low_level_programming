#include "lists.h"

/**
 * free_listint - define function
 * @head: describe argument
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
