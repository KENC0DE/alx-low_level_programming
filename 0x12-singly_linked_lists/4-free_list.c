#include "lists.h"

/**
 * free_list - free the memory accupied by nodes.
 * @head: head of the list.
*/
void free_list(list_t *head)
{
	list_t *nav = head;

	while (head)
	{
		nav = head->next;
		free(head->str);
		free(head);
		head = nav;
	}
}

