#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at the given index.
 * @head: pointer to the first node of the list.
 * @index: index where the node gets deleted.
 * Return: 1 if succeeded else -1.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tp, *tmp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	tp = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && tp; i++)
		{
			tp = tp->next;
		}
		if (tp == NULL)
			return (-1);
	}

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	else
	{
		tmp = tp->next;
		tp->next = tmp->next;
		free(tmp);
	}
	return (1);
}

