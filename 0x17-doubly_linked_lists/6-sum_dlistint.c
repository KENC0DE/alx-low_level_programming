#include "lists.h"

/**
 * sum_dlistint - sums the date of the d-list
 * @head: head of the list.
 *
 * Return: sum val.
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tp = head;
	int sum = 0;

	if (!head)
		return (0);

	while (tp)
	{
		sum += tp->n;
		tp = tp->next;
	}
	return (sum);
}

