#include "lists.h"

/**
 * free_list - free the memory accupied by nodes.
 * @head: head of the list.
*/
void free_list(list_t *head)
{
	list_t *nav = head;

	while (nav->next)
	{
		head = head->next;
		free(nav->str);
		free(nav);
		nav = head;
	}
	free(nav->str);
	free(nav);
}

