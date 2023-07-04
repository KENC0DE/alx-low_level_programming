#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at the a given index.
 * @head: pointer to the first node of the list.
 * @idx: index where the new node gets added
 * @n: value to be stored in the new node.
 * Return: sum of the linked list data.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tp;
	listint_t *new;
	unsigned int i;

	if (*head == NULL)
		return (NULL);

	tp = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && tp; i++)
		{
			tp = tp->next;
		}
		if (tp == NULL)
			return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = tp->next;
		tp->next = new;
	}
	return (new);
}

