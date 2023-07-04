#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of the list.
 * @head: pointer to the first node of the list.
 * @n: elemen to be stored in the newly added node.
 * Return: address of the new node.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (!(*head))
	{
		*head = new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		(*head)->n = n;
		(*head)->next = NULL;
		return (*head);
	}

	while (tp->next)
		tp = tp->next;

	tp->next = new;
	new->n = n;
	new->next = NULL;

	return (new);
}

