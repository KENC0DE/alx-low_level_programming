#include "lists.h"

/**
 * pop_listint - delets the head node
 * @head: target data
 * Return: return node date
*/
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int stored;

	if (*head == NULL)
		return (0);

	ptr = *head;
	stored = ptr->n;
	*head = ptr->next;
	free(ptr);
	ptr = NULL;

	return (stored);
}
