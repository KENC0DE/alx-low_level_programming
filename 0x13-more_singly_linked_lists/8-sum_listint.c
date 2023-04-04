#include "lists.h"

/**
 * sum_listint - sums all the datas in the linked lists
 * @head: the target data
 * Return: the sum of the data
*/
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	ptr = head;
	if (ptr == NULL)
		return (0);

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
