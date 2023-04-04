#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - count and print elements
 * @h: passed pointer to the target data
 * Return: number of conted nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t ptr_count = 0;
	const listint_t *ptr = NULL;

	ptr = h;
	if (ptr == NULL)
	{
		printf("Error\n");
		return (1);
	}
	while (ptr != NULL)
	{
		ptr_count++;
		printf("%d", ptr->n);
		printf("\n");
		ptr = ptr->next;
	}

	return (ptr_count);

}
