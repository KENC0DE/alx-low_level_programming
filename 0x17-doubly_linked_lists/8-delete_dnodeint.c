#include "lists.h"

/**
 * delete_dnodeint_at_index - del node at idx.
 * @head: head of the list.
 * @index: idex to be del.
 *
 * Return: val del -1 or 1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tp;

	tp = *head;
	if (index == 0)
	{
		if (tp->next)
		{
			*head = tp->next;
			(*head)->prev = NULL;
			free(tp);
			return (1);
		}
		else
		{
			free(tp);
			*head = NULL;
			return (1);
		}
	}
	while (i < index)
	{
		if (i < index && !tp)
			return (-1);
		if (i + 1 == index && tp->next == NULL)
		{
			tp->prev->next = NULL;
			free(tp);
			return (1);
		}
		tp = tp->next;
		i++;
	}
	tp->prev->next = tp->next;
	free(tp);
	return (1);
}

