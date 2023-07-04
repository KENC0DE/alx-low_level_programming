#include "lists.h"

/**
 * pop_listint - delets the head of a linked list.
 * @head: pointer to the first node of the list.
 * Return: the data of the deleted node.
*/
int pop_listint(listint_t **head)
{
	listint_t *tp = *head;
	int n;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);

	*head = (*head)->next;
	n = tp->n;
	free(tp);
	return (n);
}

