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
	dlistint_t *tp, *new;
	unsigned int i;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	tp = *h;
	for (i = 0; tp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			if (tp->next == NULL)
				return (add_dnodeint_end(h, n));
			new->next = tp->next;
			new->prev = tp;
			tp->next->prev = new;
			tp->next = new;
			return (new);
		}
		else
			tp = tp->next;
	}
	return (NULL);
}

