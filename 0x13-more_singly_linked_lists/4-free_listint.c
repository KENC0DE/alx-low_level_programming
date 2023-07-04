#include "lists.h"

/**
 * free_listint - free every a given node.
 * @head: pointer to the first node of the list.
 * Return: Nothing.
*/
void free_listint(listint_t *head)
{
	listint_t *tp;

	if (head == NULL)
		return;

	while (tp)
	{
		tp = head->next;
		free(head);
		head = tp;
	}
}

