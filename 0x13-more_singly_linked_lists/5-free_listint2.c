#include "lists.h"

/**
 * free_listint2 - free every a given node.
 * @head: pointer to the first node of the list.
 * Return: Nothing.
*/
void free_listint2(listint_t **head)
{
	listint_t *tp;

	if (*head == NULL)
		return;

	while (*head)
	{
		tp = (*head)->next;
		free(*head);
		*head = tp;
	}
	head = NULL;
}

