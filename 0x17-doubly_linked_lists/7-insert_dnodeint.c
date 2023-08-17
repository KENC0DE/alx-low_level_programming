#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at idx.
 * @h: head of the list.
 * @idx: index.
 * @n: value.
 *
 * Return: addres of the new addres.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tp, *new = NULL;
	unsigned int i;

	if (!h || !(*h))
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	tp = *h, i = 0;
	while (i < idx)
	{
		if (i < idx && tp == NULL)
			return (NULL);

		if (i + 1 == idx && tp->next == NULL)
			return (add_dnodeint_end(h, n));

		tp = tp->next;
		i++;
	}

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = tp->prev;
	new->next = tp;
	tp->prev->next = new;
	return (new);
}

