#include "lists.h"

/**
 * free_dlistint - free the d list.
 * @head: head of the list.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tp = head;

	if (head)
		while (head)
		{
			tp = tp->next;
			free(head);
			head = tp;
		}
}

