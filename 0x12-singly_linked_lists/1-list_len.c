#include "lists.h"

/**
 * list_len - conte the number of nodes in the linked list.
 * @h: pointe the head.
 * Return: number of nodes.
*/
size_t list_len(const list_t *h)
{
	const list_t *nav = h;
	size_t len = 0;

	while (nav)
	{
		nav = nav->next;
		len++;
	}

	return (len);
}

