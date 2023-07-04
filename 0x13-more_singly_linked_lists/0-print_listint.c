#include "lists.h"

/**
 * print_listint - prints all elements of listint and return number of nodes.
 * @h: pointer to the first node of the list.
 * Return: number of nodes counted.
*/
size_t print_listint(const listint_t *h)
{
	int i;
	const listint_t *cp = h;

	for (i = 0; cp; cp = cp->next, i++)
	{
		printf("%d\n", cp->n);
	}

	return (i);
}

