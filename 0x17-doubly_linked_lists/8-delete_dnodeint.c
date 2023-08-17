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
	unsigned int i;
	dlistint_t *tp, *wt;

	if (!head || !(*head))
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
	for (i = 0; tp && i < index; i++)
	{
		if (i == index - 1)
		{
			if (tp->next == NULL)
			{
				tp->prev->next = NULL;
				free(tp);
				return (1);
			}
			wt = tp->next;
			tp->next = wt->next;
			free(wt);
			return (1);
		}
		else
			tp = tp->next;
	}
	return (-1);
}

