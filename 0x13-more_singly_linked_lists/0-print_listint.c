#include "lists.h"

/**
 * print_listint - count and print elements
 * @h: passed pointer to the target data
 * Return: number of conted nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t ptr_count = 0;

	while (h != NULL)
	{
		ptr_count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (ptr_count);

}
