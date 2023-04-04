#include "lists.h"

/**
 * listint_len - return number of element in a linked list
 * @h: passed pointer to the target data
 *
 *
 * Return: number of conted nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t ptr_count = 0;

	while (h)
	{
		ptr_count++;
		h = h->next;
	}

	return (ptr_count);

}
