#include "lists.h"

/**
 * add_dnodeint - add node at the beginning of the list.
 * @head: head of the list.
 * @n: data to be inserted.
 *
 * Return: the new node.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tp;
	dlistint_t *new;

	if (!head)
		return (NULL);

	tp = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (!(*head))
	{
		*head = new;
		return (new);
	}
	if (tp->prev)
		for (; tp->prev; tp = tp->prev)
			;
	tp->prev = new;
	new->next = tp;
	*head = new;
	return (new);
}

