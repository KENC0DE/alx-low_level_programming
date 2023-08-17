#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of the list.
 * @head: head of the list.
 * @n: data to be inserted.
 *
 * Return: the new node.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tp, *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (!(*head))
	{
		*head = new;
		return (new);
	}
	for (tp = *head; tp->next; tp = tp->next)
		;
	tp->next = new;
	new->prev = tp;
	return (new);
}

