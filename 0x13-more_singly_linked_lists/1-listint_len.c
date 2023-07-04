#include "lists.h"

/**
 * listint_len - return number of elements.
 * @h: pointer to the first node of the list.
 * Return: number of nodes counted.
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *cp = h;

	for (i = 0; cp;  i++)
		cp = cp->next;

	return (i);
}

