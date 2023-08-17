#include "lists.h"

/**
 * print_dlistint - list ints int d-linked list.
 * @h: the var.
 * Return: num nodes.
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t nn = 0;

	for (; h; h = h->next, nn++)
		printf("%d\n", h->n);
	return (nn);
}

