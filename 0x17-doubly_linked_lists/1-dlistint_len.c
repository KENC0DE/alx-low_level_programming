#include "lists.h"

/**
 * dlistint_len - list ints int d-linked list.
 * @h: the var.
 * Return: num nodes.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}

