#include "lists.h"

/**
 * reverse_listint - reverse the linked list
 * @head: target linked list
 *
 * Return: pointer to the head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *back = NULL;
	listint_t *front = NULL;

	while (*head)
	{
		front = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = front;
	}

	*head = back;

	return (*head);
}
