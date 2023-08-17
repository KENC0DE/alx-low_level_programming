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
	dlistint_t *tp, *dl;

	if (!(*head))
		return (-1);
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
	while (i < index && tp)
	{
		if (i == index - 1)
		{
			dl = tp->next;
			tp->next = NULL;
			free(dl);
			return (1);
		}
		else if (i == index - 1)
		{
			dl = tp->next;
			tp->next = dl->next;
			dl->next->prev = tp;
			free(dl);
			return (1);
		}
		tp = tp->next;
		i++;
	}
	return (-1);
}

