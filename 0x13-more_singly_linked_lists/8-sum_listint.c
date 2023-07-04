#include "lists.h"

/**
 * sum_listint - sums up all the data in the linked list.
 * @head: pointer to the first node of the list.
 * Return: sum of the linked list data.
*/
int sum_listint(listint_t *head)
{
	listint_t *tp = head;
	int sum;

	if (head == NULL)
		return (0);

	for (sum = 0; tp; tp = tp->next)
	{
		sum += tp->n;
	}
	return (sum);
}


