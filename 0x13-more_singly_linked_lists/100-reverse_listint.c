#include "lists.h"

/**
 * reverse_listint - reverses linked list.
 * @head: pointer to the first node of the list.
 * Return: pointer to the first node.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *l, *r;

	if (*head == NULL || head == NULL)
		return (NULL);

	l = (*head)->next;
	r = *head;
	r->next = NULL;
	while (l)
	{
		*head = l;
		l = l->next;
		(*head)->next = r;
		r = *head;
	}
	*head = r;
	return (r);
}

