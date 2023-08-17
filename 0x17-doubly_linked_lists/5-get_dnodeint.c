#include "lists.h"

/**
 * get_dnodeint_at_index - get now at a given index
 * @index: node existis at this index.
 * @head: head of the list.
 *
 * Return: addres of the node at the index.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tp = head;

	while (i < index)
	{
		if (i < index && !tp)
			return (NULL);
		tp = tp->next;
		i++;
	}
	return (tp);
}

